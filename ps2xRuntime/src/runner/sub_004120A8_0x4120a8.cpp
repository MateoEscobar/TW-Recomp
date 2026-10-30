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

// Function: sub_004120A8
// Address: 0x4120a8 - 0x412310
void sub_004120A8_0x4120a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004120A8_0x4120a8");
#endif

    switch (ctx->pc) {
        case 0x412110u: goto label_412110;
        case 0x412188u: goto label_412188;
        case 0x4121dcu: goto label_4121dc;
        case 0x412258u: goto label_412258;
        case 0x41226cu: goto label_41226c;
        default: break;
    }

    ctx->pc = 0x4120a8u;

    // 0x4120a8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4120a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x4120ac: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4120acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4120b0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x4120b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x4120b4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4120b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x4120b8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4120b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4120bc: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x4120bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x4120c0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x4120c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4120c4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x4120c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x4120c8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x4120c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x4120cc: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x4120ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x4120d0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x4120d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x4120d4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x4120d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x4120d8: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x4120d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x4120dc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4120dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4120e0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x4120e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x4120e4: 0xc4408e24  lwc1        $f0, -0x71DC($v0)
    ctx->pc = 0x4120e4u;
    { uint32_t bits = FAST_READ32(0x588E24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4120e8: 0x8e832164  lw          $v1, 0x2164($s4)
    ctx->pc = 0x4120e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8548)));
    // 0x4120ec: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x4120ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x4120f0: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x4120f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x4120f4: 0x2e3102b  sltu        $v0, $s7, $v1
    ctx->pc = 0x4120f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4120f8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4120f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4120fc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x4120fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x412100: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x412100u;
    {
        const bool branch_taken_0x412100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412100u;
        // 0x412104: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x412100) {
            ctx->pc = 0x4122D8u;
            goto label_4122d8;
        }
    }
    ctx->pc = 0x412108u;
    // 0x412108: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x412108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x41210c: 0x0  nop
    ctx->pc = 0x41210cu;
    // NOP
label_412110:
    // 0x412110: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x412110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x412114: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x412114u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412118: 0x8c64ced0  lw          $a0, -0x3130($v1)
    ctx->pc = 0x412118u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CED0u));
    // 0x41211c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x41211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x412120: 0x8c430944  lw          $v1, 0x944($v0)
    ctx->pc = 0x412120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2372)));
    // 0x412124: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x412124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x412128: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x412128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x41212c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x41212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x412130: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x412130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x412134: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x412134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x412138: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x412138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x41213c: 0x54620062  bnel        $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x41213Cu;
    {
        const bool branch_taken_0x41213c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x41213c) {
            ctx->pc = 0x412140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41213Cu;
            // 0x412140: 0x8fb70030  lw          $s7, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4122C8u;
            goto label_4122c8;
        }
    }
    ctx->pc = 0x412144u;
    // 0x412144: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x412144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x412148: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x412148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41214c: 0x24420940  addiu       $v0, $v0, 0x940
    ctx->pc = 0x41214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2368));
    // 0x412150: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x412150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x412154: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x412154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x412158: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x412158u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x41215c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x41215cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x412160: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x412160u;
    {
        const bool branch_taken_0x412160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x412164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412160u;
        // 0x412164: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412160) {
            ctx->pc = 0x412214u;
            goto label_412214;
        }
    }
    ctx->pc = 0x412168u;
    // 0x412168: 0x2b49021  addu        $s2, $s5, $s4
    ctx->pc = 0x412168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x41216c: 0x269608f8  addiu       $s6, $s4, 0x8F8
    ctx->pc = 0x41216cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 2296));
    // 0x412170: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x412170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412174: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x412174u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x412178: 0x26520940  addiu       $s2, $s2, 0x940
    ctx->pc = 0x412178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
    // 0x41217c: 0x26100940  addiu       $s0, $s0, 0x940
    ctx->pc = 0x41217cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2368));
    // 0x412180: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x412180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x412184: 0x0  nop
    ctx->pc = 0x412184u;
    // NOP
label_412188:
    // 0x412188: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x412188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x41218c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41218cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x412190: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x412190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412194: 0x8c45ced0  lw          $a1, -0x3130($v0)
    ctx->pc = 0x412194u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50CED0u));
    // 0x412198: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x412198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x41219c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x41219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4121a0: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x4121a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4121a4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x4121a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4121a8: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x4121a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x4121ac: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x4121acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x4121b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4121b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4121b4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x4121b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x4121b8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x4121b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x4121bc: 0x7e2804  sllv        $a1, $fp, $v1
    ctx->pc = 0x4121bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), GPR_U32(ctx, 3) & 0x1F));
    // 0x4121c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4121c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4121c4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4121c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4121c8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4121C8u;
    {
        const bool branch_taken_0x4121c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4121CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4121C8u;
        // 0x4121cc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4121c8) {
            ctx->pc = 0x4121E4u;
            goto label_4121e4;
        }
    }
    ctx->pc = 0x4121D0u;
    // 0x4121d0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4121d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4121d4: 0xc066088  jal         func_198220
    ctx->pc = 0x4121D4u;
    SET_GPR_U32(ctx, 31, 0x4121DCu);
    ctx->pc = 0x4121D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4121D4u;
    // 0x4121d8: 0x7fa70040  sq          $a3, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198220u, 0x4121D4u, 0x4121DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4121DCu;
label_4121dc:
    // 0x4121dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4121DCu;
    {
        const bool branch_taken_0x4121dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4121E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4121DCu;
        // 0x4121e0: 0x7ba70040  lq          $a3, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4121dc) {
            ctx->pc = 0x4121E8u;
            goto label_4121e8;
        }
    }
    ctx->pc = 0x4121E4u;
label_4121e4:
    // 0x4121e4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4121e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4121e8:
    // 0x4121e8: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4121E8u;
    {
        const bool branch_taken_0x4121e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4121e8) {
            ctx->pc = 0x4121ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4121E8u;
            // 0x4121ec: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4121F8u;
            goto label_4121f8;
        }
    }
    ctx->pc = 0x4121F0u;
    // 0x4121f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4121F0u;
    {
        const bool branch_taken_0x4121f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4121F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4121F0u;
        // 0x4121f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4121f0) {
            ctx->pc = 0x412214u;
            goto label_412214;
        }
    }
    ctx->pc = 0x4121F8u;
label_4121f8:
    // 0x4121f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4121f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4121fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4121fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x412200: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x412200u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x412204: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x412204u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x412208: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x412208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x41220c: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x41220Cu;
    {
        const bool branch_taken_0x41220c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41220c) {
            ctx->pc = 0x412210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41220Cu;
            // 0x412210: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412188;
        }
    }
    ctx->pc = 0x412214u;
label_412214:
    // 0x412214: 0x10e0002b  beqz        $a3, . + 4 + (0x2B << 2)
    ctx->pc = 0x412214u;
    {
        const bool branch_taken_0x412214 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x412218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412214u;
        // 0x412218: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412214) {
            ctx->pc = 0x4122C4u;
            goto label_4122c4;
        }
    }
    ctx->pc = 0x41221Cu;
    // 0x41221c: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x41221cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x412220: 0x24630940  addiu       $v1, $v1, 0x940
    ctx->pc = 0x412220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2368));
    // 0x412224: 0xc4548e28  lwc1        $f20, -0x71D8($v0)
    ctx->pc = 0x412224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294938152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x412228: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x412228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x41222c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x41222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x412230: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x412230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x412234: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x412234u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x412238: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x412238u;
    {
        const bool branch_taken_0x412238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412238u;
        // 0x41223c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412238) {
            ctx->pc = 0x41229Cu;
            goto label_41229c;
        }
    }
    ctx->pc = 0x412240u;
    // 0x412240: 0x2b48021  addu        $s0, $s5, $s4
    ctx->pc = 0x412240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x412244: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x412244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412248: 0x26520940  addiu       $s2, $s2, 0x940
    ctx->pc = 0x412248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
    // 0x41224c: 0x26100940  addiu       $s0, $s0, 0x940
    ctx->pc = 0x41224cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2368));
    // 0x412250: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x412250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x412254: 0x0  nop
    ctx->pc = 0x412254u;
    // NOP
label_412258:
    // 0x412258: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x412258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x41225c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x412260: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x412260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x412264: 0xc10407c  jal         func_4101F0
    ctx->pc = 0x412264u;
    SET_GPR_U32(ctx, 31, 0x41226Cu);
    ctx->pc = 0x412268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412264u;
    // 0x412268: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4101F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4101F0u, 0x412264u, 0x41226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41226Cu;
label_41226c:
    // 0x41226c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x41226cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x412270: 0x0  nop
    ctx->pc = 0x412270u;
    // NOP
    // 0x412274: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x412274u;
    {
        const bool branch_taken_0x412274 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x412274) {
            ctx->pc = 0x412278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412274u;
            // 0x412278: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x41227Cu;
            goto label_41227c;
        }
    }
    ctx->pc = 0x41227Cu;
label_41227c:
    // 0x41227c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x41227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x412280: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x412280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x412284: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x412284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x412288: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x412288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x41228c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x41228cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x412290: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x412290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x412294: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x412294u;
    {
        const bool branch_taken_0x412294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x412294) {
            ctx->pc = 0x412298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412294u;
            // 0x412298: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412258;
        }
    }
    ctx->pc = 0x41229Cu;
label_41229c:
    // 0x41229c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x41229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4122a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4122a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4122a4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4122a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4122a8: 0x0  nop
    ctx->pc = 0x4122a8u;
    // NOP
    // 0x4122ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x4122ACu;
    {
        const bool branch_taken_0x4122ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4122B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4122ACu;
        // 0x4122b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4122ac) {
            ctx->pc = 0x4122C4u;
            goto label_4122c4;
        }
    }
    ctx->pc = 0x4122B4u;
    // 0x4122b4: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x4122b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4122b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4122b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4122bc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4122bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x4122c0: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x4122c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
label_4122c4:
    // 0x4122c4: 0x8fb70030  lw          $s7, 0x30($sp)
    ctx->pc = 0x4122c4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4122c8:
    // 0x4122c8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x4122c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x4122cc: 0x2e3102b  sltu        $v0, $s7, $v1
    ctx->pc = 0x4122ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4122d0: 0x1440ff8f  bnez        $v0, . + 4 + (-0x71 << 2)
    ctx->pc = 0x4122D0u;
    {
        const bool branch_taken_0x4122d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4122D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4122D0u;
        // 0x4122d4: 0x171100  sll         $v0, $s7, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4122d0) {
            ctx->pc = 0x412110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412110;
        }
    }
    ctx->pc = 0x4122D8u;
label_4122d8:
    // 0x4122d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x4122d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4122dc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x4122dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x4122e0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x4122e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4122e4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x4122e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4122e8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x4122e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4122ec: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x4122ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4122f0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x4122f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4122f4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x4122f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4122f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4122f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4122fc: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x4122fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x412300: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x412300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x412304: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x412304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x412308: 0x3e00008  jr          $ra
    ctx->pc = 0x412308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412308u;
        // 0x41230c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412310u;
}
