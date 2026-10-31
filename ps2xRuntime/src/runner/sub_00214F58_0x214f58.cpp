#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00214F58
// Address: 0x214f58 - 0x215150
void sub_00214F58_0x214f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214F58_0x214f58");
#endif

    switch (ctx->pc) {
        case 0x214ffcu: goto label_214ffc;
        case 0x215018u: goto label_215018;
        case 0x215030u: goto label_215030;
        case 0x215040u: goto label_215040;
        case 0x21506cu: goto label_21506c;
        case 0x215098u: goto label_215098;
        case 0x2150b0u: goto label_2150b0;
        case 0x2150c0u: goto label_2150c0;
        case 0x2150e0u: goto label_2150e0;
        case 0x215100u: goto label_215100;
        case 0x215110u: goto label_215110;
        case 0x215128u: goto label_215128;
        default: break;
    }

    ctx->pc = 0x214f58u;

    // 0x214f58: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x214f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x214f5c: 0x24070e10  addiu       $a3, $zero, 0xE10
    ctx->pc = 0x214f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x214f60: 0x34635180  ori         $v1, $v1, 0x5180
    ctx->pc = 0x214f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20864);
    // 0x214f64: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x214f64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x214f68: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x214f68u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x214f6c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x214f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x214f70: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x214f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x214f74: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x214f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x214f78: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x214f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x214f7c: 0x34425180  ori         $v0, $v0, 0x5180
    ctx->pc = 0x214f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20864);
    // 0x214f80: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x214f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x214f84: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x214f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x214f88: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x214f88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f8c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x214f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x214f90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x214f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x214f94: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x214F94u;
    {
        const bool branch_taken_0x214f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x214f94) {
            ctx->pc = 0x214F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214F94u;
            // 0x214f98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x214F9Cu;
            goto label_214f9c;
        }
    }
    ctx->pc = 0x214F9Cu;
label_214f9c:
    // 0x214f9c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x214f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x214fa0: 0x5012  mflo        $t2
    ctx->pc = 0x214fa0u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x214fa4: 0x4010  mfhi        $t0
    ctx->pc = 0x214fa4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x214fa8: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x214fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fac: 0x87001b  divu        $zero, $a0, $a3
    ctx->pc = 0x214facu;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x214fb0: 0x24040e10  addiu       $a0, $zero, 0xE10
    ctx->pc = 0x214fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x214fb4: 0x4810  mfhi        $t1
    ctx->pc = 0x214fb4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x214fb8: 0x107001b  divu        $zero, $t0, $a3
    ctx->pc = 0x214fb8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x214fbc: 0x3812  mflo        $a3
    ctx->pc = 0x214fbcu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x214fc0: 0x123001b  divu        $zero, $t1, $v1
    ctx->pc = 0x214fc0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x214fc4: 0x9012  mflo        $s2
    ctx->pc = 0x214fc4u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x214fc8: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214FC8u;
    {
        const bool branch_taken_0x214fc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x214FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FC8u;
        // 0x214fcc: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fc8) {
            ctx->pc = 0x214FE0u;
            goto label_214fe0;
        }
    }
    ctx->pc = 0x214FD0u;
    // 0x214fd0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x214fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x214fd4: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x214fd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x214fd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x214fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fdc: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x214fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_214fe0:
    // 0x214fe0: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x214FE0u;
    {
        const bool branch_taken_0x214fe0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FE0u;
        // 0x214fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fe0) {
            ctx->pc = 0x215074u;
            goto label_215074;
        }
    }
    ctx->pc = 0x214FE8u;
    // 0x214fe8: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x214FE8u;
    {
        const bool branch_taken_0x214fe8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x214FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FE8u;
        // 0x214fec: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fe8) {
            ctx->pc = 0x214FF4u;
            goto label_214ff4;
        }
    }
    ctx->pc = 0x214FF0u;
    // 0x214ff0: 0x2404006b  addiu       $a0, $zero, 0x6B
    ctx->pc = 0x214ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_214ff4:
    // 0x214ff4: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x214FF4u;
    SET_GPR_U32(ctx, 31, 0x214FFCu);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x214FF4u, 0x214FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214FFCu;
label_214ffc:
    // 0x214ffc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x214ffcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215004: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x215004u;
    {
        const bool branch_taken_0x215004 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x215008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215004u;
        // 0x215008: 0x2404006a  addiu       $a0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215004) {
            ctx->pc = 0x215010u;
            goto label_215010;
        }
    }
    ctx->pc = 0x21500Cu;
    // 0x21500c: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x21500cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_215010:
    // 0x215010: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x215010u;
    SET_GPR_U32(ctx, 31, 0x215018u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x215010u, 0x215018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215018u;
label_215018:
    // 0x215018: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x215018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21501c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215020: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215020u;
    {
        const bool branch_taken_0x215020 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x215020) {
            ctx->pc = 0x215038u;
            goto label_215038;
        }
    }
    ctx->pc = 0x215028u;
    // 0x215028: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x215028u;
    SET_GPR_U32(ctx, 31, 0x215030u);
    ctx->pc = 0x21502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215028u;
    // 0x21502c: 0x24040067  addiu       $a0, $zero, 0x67 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x215028u, 0x215030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215030u;
label_215030:
    // 0x215030: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x215030u;
    {
        const bool branch_taken_0x215030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215030u;
        // 0x215034: 0x3c060056  lui         $a2, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215030) {
            ctx->pc = 0x215044u;
            goto label_215044;
        }
    }
    ctx->pc = 0x215038u;
label_215038:
    // 0x215038: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x215038u;
    SET_GPR_U32(ctx, 31, 0x215040u);
    ctx->pc = 0x21503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215038u;
    // 0x21503c: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x215038u, 0x215040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215040u;
label_215040:
    // 0x215040: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x215040u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_215044:
    // 0x215044: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x215044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x215048: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x215048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21504c: 0x24c69f08  addiu       $a2, $a2, -0x60F8
    ctx->pc = 0x21504cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942472));
    // 0x215050: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x215050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215054: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x215054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215058: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x215058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21505c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x21505cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215060: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x215060u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215064: 0xc10ca04  jal         func_432810
    ctx->pc = 0x215064u;
    SET_GPR_U32(ctx, 31, 0x21506Cu);
    ctx->pc = 0x215068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215064u;
    // 0x215068: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x215064u, 0x21506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21506Cu;
label_21506c:
    // 0x21506c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x21506Cu;
    {
        const bool branch_taken_0x21506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21506Cu;
        // 0x215070: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21506c) {
            ctx->pc = 0x21512Cu;
            goto label_21512c;
        }
    }
    ctx->pc = 0x215074u;
label_215074:
    // 0x215074: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x215074u;
    {
        const bool branch_taken_0x215074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x215078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215074u;
        // 0x215078: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215074) {
            ctx->pc = 0x2150E8u;
            goto label_2150e8;
        }
    }
    ctx->pc = 0x21507Cu;
    // 0x21507c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21507cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215080: 0x24539f20  addiu       $s3, $v0, -0x60E0
    ctx->pc = 0x215080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942496));
    // 0x215084: 0x16030002  bne         $s0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x215084u;
    {
        const bool branch_taken_0x215084 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x215088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215084u;
        // 0x215088: 0x2404006a  addiu       $a0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215084) {
            ctx->pc = 0x215090u;
            goto label_215090;
        }
    }
    ctx->pc = 0x21508Cu;
    // 0x21508c: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x21508cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_215090:
    // 0x215090: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x215090u;
    SET_GPR_U32(ctx, 31, 0x215098u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x215090u, 0x215098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215098u;
label_215098:
    // 0x215098: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x215098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21509c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2150a0: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2150A0u;
    {
        const bool branch_taken_0x2150a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2150a0) {
            ctx->pc = 0x2150B8u;
            goto label_2150b8;
        }
    }
    ctx->pc = 0x2150A8u;
    // 0x2150a8: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x2150A8u;
    SET_GPR_U32(ctx, 31, 0x2150B0u);
    ctx->pc = 0x2150ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150A8u;
    // 0x2150ac: 0x24040067  addiu       $a0, $zero, 0x67 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2150A8u, 0x2150B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150B0u;
label_2150b0:
    // 0x2150b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2150B0u;
    {
        const bool branch_taken_0x2150b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2150B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150B0u;
        // 0x2150b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150b0) {
            ctx->pc = 0x2150C4u;
            goto label_2150c4;
        }
    }
    ctx->pc = 0x2150B8u;
label_2150b8:
    // 0x2150b8: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x2150B8u;
    SET_GPR_U32(ctx, 31, 0x2150C0u);
    ctx->pc = 0x2150BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150B8u;
    // 0x2150bc: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2150B8u, 0x2150C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150C0u;
label_2150c0:
    // 0x2150c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2150c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2150c4:
    // 0x2150c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2150c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150c8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2150c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150cc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2150ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150d0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2150d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150d4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2150d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150d8: 0xc10ca04  jal         func_432810
    ctx->pc = 0x2150D8u;
    SET_GPR_U32(ctx, 31, 0x2150E0u);
    ctx->pc = 0x2150DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150D8u;
    // 0x2150dc: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x2150D8u, 0x2150E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150E0u;
label_2150e0:
    // 0x2150e0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2150E0u;
    {
        const bool branch_taken_0x2150e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2150E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150E0u;
        // 0x2150e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150e0) {
            ctx->pc = 0x21512Cu;
            goto label_21512c;
        }
    }
    ctx->pc = 0x2150E8u;
label_2150e8:
    // 0x2150e8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2150e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2150ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2150ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2150f0: 0x16430005  bne         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2150F0u;
    {
        const bool branch_taken_0x2150f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x2150F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150F0u;
        // 0x2150f4: 0x24509f30  addiu       $s0, $v0, -0x60D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150f0) {
            ctx->pc = 0x215108u;
            goto label_215108;
        }
    }
    ctx->pc = 0x2150F8u;
    // 0x2150f8: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x2150F8u;
    SET_GPR_U32(ctx, 31, 0x215100u);
    ctx->pc = 0x2150FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150F8u;
    // 0x2150fc: 0x24040067  addiu       $a0, $zero, 0x67 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2150F8u, 0x215100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215100u;
label_215100:
    // 0x215100: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x215100u;
    {
        const bool branch_taken_0x215100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215100u;
        // 0x215104: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215100) {
            ctx->pc = 0x215114u;
            goto label_215114;
        }
    }
    ctx->pc = 0x215108u;
label_215108:
    // 0x215108: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x215108u;
    SET_GPR_U32(ctx, 31, 0x215110u);
    ctx->pc = 0x21510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215108u;
    // 0x21510c: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x215108u, 0x215110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215110u;
label_215110:
    // 0x215110: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x215110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_215114:
    // 0x215114: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x215114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215118: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x215118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21511c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x21511cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215120: 0xc10ca04  jal         func_432810
    ctx->pc = 0x215120u;
    SET_GPR_U32(ctx, 31, 0x215128u);
    ctx->pc = 0x215124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215120u;
    // 0x215124: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x215120u, 0x215128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215128u;
label_215128:
    // 0x215128: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x215128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21512c:
    // 0x21512c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x21512cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x215130: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x215130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x215134: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x215134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215138: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x215138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21513c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x21513cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215144: 0x3e00008  jr          $ra
    ctx->pc = 0x215144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215144u;
        // 0x215148: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21514Cu;
    // 0x21514c: 0x0  nop
    ctx->pc = 0x21514cu;
    // NOP
    ctx->pc = 0x215150u;
}
