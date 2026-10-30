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

// Function: sub_003E5090
// Address: 0x3e5090 - 0x3e5160
void sub_003E5090_0x3e5090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5090_0x3e5090");
#endif

    switch (ctx->pc) {
        case 0x3e5090u: goto label_3e5090;
        case 0x3e5094u: goto label_3e5094;
        case 0x3e5098u: goto label_3e5098;
        case 0x3e509cu: goto label_3e509c;
        case 0x3e50a0u: goto label_3e50a0;
        case 0x3e50a4u: goto label_3e50a4;
        case 0x3e50a8u: goto label_3e50a8;
        case 0x3e50acu: goto label_3e50ac;
        case 0x3e50b0u: goto label_3e50b0;
        case 0x3e50b4u: goto label_3e50b4;
        case 0x3e50b8u: goto label_3e50b8;
        case 0x3e50bcu: goto label_3e50bc;
        case 0x3e50c0u: goto label_3e50c0;
        case 0x3e50c4u: goto label_3e50c4;
        case 0x3e50c8u: goto label_3e50c8;
        case 0x3e50ccu: goto label_3e50cc;
        case 0x3e50d0u: goto label_3e50d0;
        case 0x3e50d4u: goto label_3e50d4;
        case 0x3e50d8u: goto label_3e50d8;
        case 0x3e50dcu: goto label_3e50dc;
        case 0x3e50e0u: goto label_3e50e0;
        case 0x3e50e4u: goto label_3e50e4;
        case 0x3e50e8u: goto label_3e50e8;
        case 0x3e50ecu: goto label_3e50ec;
        case 0x3e50f0u: goto label_3e50f0;
        case 0x3e50f4u: goto label_3e50f4;
        case 0x3e50f8u: goto label_3e50f8;
        case 0x3e50fcu: goto label_3e50fc;
        case 0x3e5100u: goto label_3e5100;
        case 0x3e5104u: goto label_3e5104;
        case 0x3e5108u: goto label_3e5108;
        case 0x3e510cu: goto label_3e510c;
        case 0x3e5110u: goto label_3e5110;
        case 0x3e5114u: goto label_3e5114;
        case 0x3e5118u: goto label_3e5118;
        case 0x3e511cu: goto label_3e511c;
        case 0x3e5120u: goto label_3e5120;
        case 0x3e5124u: goto label_3e5124;
        case 0x3e5128u: goto label_3e5128;
        case 0x3e512cu: goto label_3e512c;
        case 0x3e5130u: goto label_3e5130;
        case 0x3e5134u: goto label_3e5134;
        case 0x3e5138u: goto label_3e5138;
        case 0x3e513cu: goto label_3e513c;
        case 0x3e5140u: goto label_3e5140;
        case 0x3e5144u: goto label_3e5144;
        case 0x3e5148u: goto label_3e5148;
        case 0x3e514cu: goto label_3e514c;
        case 0x3e5150u: goto label_3e5150;
        case 0x3e5154u: goto label_3e5154;
        case 0x3e5158u: goto label_3e5158;
        case 0x3e515cu: goto label_3e515c;
        default: break;
    }

    ctx->pc = 0x3e5090u;

label_3e5090:
    // 0x3e5090: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e5090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3e5094:
    // 0x3e5094: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3e5094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3e5098:
    // 0x3e5098: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3e5098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3e509c:
    // 0x3e509c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e509cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e50a0:
    // 0x3e50a0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3e50a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3e50a4:
    // 0x3e50a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e50a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e50a8:
    // 0x3e50a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e50a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3e50ac:
    // 0x3e50ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e50acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e50b0:
    // 0x3e50b0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3e50b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3e50b4:
    // 0x3e50b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e50b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e50b8:
    // 0x3e50b8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e50b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e50bc:
    // 0x3e50bc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e50c0:
    // 0x3e50c0: 0x40f809  jalr        $v0
label_3e50c4:
    if (ctx->pc == 0x3E50C4u) {
        ctx->pc = 0x3E50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E50C0u;
        // 0x3e50c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E50C8u;
        goto label_3e50c8;
    }
    ctx->pc = 0x3E50C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E50C8u);
        ctx->pc = 0x3E50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E50C0u;
        // 0x3e50c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E50C0u, 0x3E50C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E50C8u;
label_3e50c8:
    // 0x3e50c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e50c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e50cc:
    // 0x3e50cc: 0xc0ea146  jal         func_3A8518
label_3e50d0:
    if (ctx->pc == 0x3E50D0u) {
        ctx->pc = 0x3E50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E50CCu;
        // 0x3e50d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E50D4u;
        goto label_3e50d4;
    }
    ctx->pc = 0x3E50CCu;
    SET_GPR_U32(ctx, 31, 0x3E50D4u);
    ctx->pc = 0x3E50D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E50CCu;
    // 0x3e50d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E50CCu, 0x3E50D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E50D4u;
label_3e50d4:
    // 0x3e50d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e50d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e50d8:
    // 0x3e50d8: 0xc0ea13a  jal         func_3A84E8
label_3e50dc:
    if (ctx->pc == 0x3E50DCu) {
        ctx->pc = 0x3E50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E50D8u;
        // 0x3e50dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E50E0u;
        goto label_3e50e0;
    }
    ctx->pc = 0x3E50D8u;
    SET_GPR_U32(ctx, 31, 0x3E50E0u);
    ctx->pc = 0x3E50DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E50D8u;
    // 0x3e50dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E50D8u, 0x3E50E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E50E0u;
label_3e50e0:
    // 0x3e50e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e50e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e50e4:
    // 0x3e50e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e50e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e50e8:
    // 0x3e50e8: 0xc0ea12a  jal         func_3A84A8
label_3e50ec:
    if (ctx->pc == 0x3E50ECu) {
        ctx->pc = 0x3E50ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E50E8u;
        // 0x3e50ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E50F0u;
        goto label_3e50f0;
    }
    ctx->pc = 0x3E50E8u;
    SET_GPR_U32(ctx, 31, 0x3E50F0u);
    ctx->pc = 0x3E50ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E50E8u;
    // 0x3e50ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E50E8u, 0x3E50F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E50F0u;
label_3e50f0:
    // 0x3e50f0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e50f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e50f4:
    // 0x3e50f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e50f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e50f8:
    // 0x3e50f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e50f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e50fc:
    // 0x3e50fc: 0xc0ea12a  jal         func_3A84A8
label_3e5100:
    if (ctx->pc == 0x3E5100u) {
        ctx->pc = 0x3E5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E50FCu;
        // 0x3e5100: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5104u;
        goto label_3e5104;
    }
    ctx->pc = 0x3E50FCu;
    SET_GPR_U32(ctx, 31, 0x3E5104u);
    ctx->pc = 0x3E5100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E50FCu;
    // 0x3e5100: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E50FCu, 0x3E5104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5104u;
label_3e5104:
    // 0x3e5104: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e5104u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e5108:
    // 0x3e5108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e5108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e510c:
    // 0x3e510c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e510cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e5110:
    // 0x3e5110: 0xc0e858c  jal         func_3A1630
label_3e5114:
    if (ctx->pc == 0x3E5114u) {
        ctx->pc = 0x3E5114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5110u;
        // 0x3e5114: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5118u;
        goto label_3e5118;
    }
    ctx->pc = 0x3E5110u;
    SET_GPR_U32(ctx, 31, 0x3E5118u);
    ctx->pc = 0x3E5114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5110u;
    // 0x3e5114: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E5110u, 0x3E5118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5118u;
label_3e5118:
    // 0x3e5118: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3e5118u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e511c:
    // 0x3e511c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e5120:
    // 0x3e5120: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3e5120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3e5124:
    // 0x3e5124: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3e5124u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3e5128:
    // 0x3e5128: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x3e5128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
label_3e512c:
    // 0x3e512c: 0xe6540014  swc1        $f20, 0x14($s2)
    ctx->pc = 0x3e512cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_3e5130:
    // 0x3e5130: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3e5130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e5134:
    // 0x3e5134: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e5134u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e5138:
    // 0x3e5138: 0xae530018  sw          $s3, 0x18($s2)
    ctx->pc = 0x3e5138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 19));
label_3e513c:
    // 0x3e513c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3e513cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3e5140:
    // 0x3e5140: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3e5140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_3e5144:
    // 0x3e5144: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3e5144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e5148:
    // 0x3e5148: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3e5148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e514c:
    // 0x3e514c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e514cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e5150:
    // 0x3e5150: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e5150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e5154:
    // 0x3e5154: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3e5154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e5158:
    // 0x3e5158: 0x3e00008  jr          $ra
label_3e515c:
    if (ctx->pc == 0x3E515Cu) {
        ctx->pc = 0x3E515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5158u;
        // 0x3e515c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5160u;
        goto label_fallthrough_0x3e5158;
    }
    ctx->pc = 0x3E5158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5158u;
        // 0x3e515c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e5158:
    ctx->pc = 0x3E5160u;
}
