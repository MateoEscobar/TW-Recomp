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

// Function: sub_0011C9E0
// Address: 0x11c9e0 - 0x11cb70
void sub_0011C9E0_0x11c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C9E0_0x11c9e0");
#endif

    switch (ctx->pc) {
        case 0x11c9e0u: goto label_11c9e0;
        case 0x11c9e4u: goto label_11c9e4;
        case 0x11c9e8u: goto label_11c9e8;
        case 0x11c9ecu: goto label_11c9ec;
        case 0x11c9f0u: goto label_11c9f0;
        case 0x11c9f4u: goto label_11c9f4;
        case 0x11c9f8u: goto label_11c9f8;
        case 0x11c9fcu: goto label_11c9fc;
        case 0x11ca00u: goto label_11ca00;
        case 0x11ca04u: goto label_11ca04;
        case 0x11ca08u: goto label_11ca08;
        case 0x11ca0cu: goto label_11ca0c;
        case 0x11ca10u: goto label_11ca10;
        case 0x11ca14u: goto label_11ca14;
        case 0x11ca18u: goto label_11ca18;
        case 0x11ca1cu: goto label_11ca1c;
        case 0x11ca20u: goto label_11ca20;
        case 0x11ca24u: goto label_11ca24;
        case 0x11ca28u: goto label_11ca28;
        case 0x11ca2cu: goto label_11ca2c;
        case 0x11ca30u: goto label_11ca30;
        case 0x11ca34u: goto label_11ca34;
        case 0x11ca38u: goto label_11ca38;
        case 0x11ca3cu: goto label_11ca3c;
        case 0x11ca40u: goto label_11ca40;
        case 0x11ca44u: goto label_11ca44;
        case 0x11ca48u: goto label_11ca48;
        case 0x11ca4cu: goto label_11ca4c;
        case 0x11ca50u: goto label_11ca50;
        case 0x11ca54u: goto label_11ca54;
        case 0x11ca58u: goto label_11ca58;
        case 0x11ca5cu: goto label_11ca5c;
        case 0x11ca60u: goto label_11ca60;
        case 0x11ca64u: goto label_11ca64;
        case 0x11ca68u: goto label_11ca68;
        case 0x11ca6cu: goto label_11ca6c;
        case 0x11ca70u: goto label_11ca70;
        case 0x11ca74u: goto label_11ca74;
        case 0x11ca78u: goto label_11ca78;
        case 0x11ca7cu: goto label_11ca7c;
        case 0x11ca80u: goto label_11ca80;
        case 0x11ca84u: goto label_11ca84;
        case 0x11ca88u: goto label_11ca88;
        case 0x11ca8cu: goto label_11ca8c;
        case 0x11ca90u: goto label_11ca90;
        case 0x11ca94u: goto label_11ca94;
        case 0x11ca98u: goto label_11ca98;
        case 0x11ca9cu: goto label_11ca9c;
        case 0x11caa0u: goto label_11caa0;
        case 0x11caa4u: goto label_11caa4;
        case 0x11caa8u: goto label_11caa8;
        case 0x11caacu: goto label_11caac;
        case 0x11cab0u: goto label_11cab0;
        case 0x11cab4u: goto label_11cab4;
        case 0x11cab8u: goto label_11cab8;
        case 0x11cabcu: goto label_11cabc;
        case 0x11cac0u: goto label_11cac0;
        case 0x11cac4u: goto label_11cac4;
        case 0x11cac8u: goto label_11cac8;
        case 0x11caccu: goto label_11cacc;
        case 0x11cad0u: goto label_11cad0;
        case 0x11cad4u: goto label_11cad4;
        case 0x11cad8u: goto label_11cad8;
        case 0x11cadcu: goto label_11cadc;
        case 0x11cae0u: goto label_11cae0;
        case 0x11cae4u: goto label_11cae4;
        case 0x11cae8u: goto label_11cae8;
        case 0x11caecu: goto label_11caec;
        case 0x11caf0u: goto label_11caf0;
        case 0x11caf4u: goto label_11caf4;
        case 0x11caf8u: goto label_11caf8;
        case 0x11cafcu: goto label_11cafc;
        case 0x11cb00u: goto label_11cb00;
        case 0x11cb04u: goto label_11cb04;
        case 0x11cb08u: goto label_11cb08;
        case 0x11cb0cu: goto label_11cb0c;
        case 0x11cb10u: goto label_11cb10;
        case 0x11cb14u: goto label_11cb14;
        case 0x11cb18u: goto label_11cb18;
        case 0x11cb1cu: goto label_11cb1c;
        case 0x11cb20u: goto label_11cb20;
        case 0x11cb24u: goto label_11cb24;
        case 0x11cb28u: goto label_11cb28;
        case 0x11cb2cu: goto label_11cb2c;
        case 0x11cb30u: goto label_11cb30;
        case 0x11cb34u: goto label_11cb34;
        case 0x11cb38u: goto label_11cb38;
        case 0x11cb3cu: goto label_11cb3c;
        case 0x11cb40u: goto label_11cb40;
        case 0x11cb44u: goto label_11cb44;
        case 0x11cb48u: goto label_11cb48;
        case 0x11cb4cu: goto label_11cb4c;
        case 0x11cb50u: goto label_11cb50;
        case 0x11cb54u: goto label_11cb54;
        case 0x11cb58u: goto label_11cb58;
        case 0x11cb5cu: goto label_11cb5c;
        case 0x11cb60u: goto label_11cb60;
        case 0x11cb64u: goto label_11cb64;
        case 0x11cb68u: goto label_11cb68;
        case 0x11cb6cu: goto label_11cb6c;
        default: break;
    }

    ctx->pc = 0x11c9e0u;

label_11c9e0:
    // 0x11c9e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11c9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_11c9e4:
    // 0x11c9e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x11c9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_11c9e8:
    // 0x11c9e8: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x11c9e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_11c9ec:
    // 0x11c9ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11c9ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11c9f0:
    // 0x11c9f0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x11c9f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_11c9f4:
    // 0x11c9f4: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x11c9f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_11c9f8:
    // 0x11c9f8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x11c9f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_11c9fc:
    // 0x11c9fc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x11c9fcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_11ca00:
    // 0x11ca00: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_11ca04:
    // 0x11ca04: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x11ca04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_11ca08:
    // 0x11ca08: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11ca08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_11ca0c:
    // 0x11ca0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ca0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11ca10:
    // 0x11ca10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11ca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_11ca14:
    // 0x11ca14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11ca14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_11ca18:
    // 0x11ca18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11ca1c:
    // 0x11ca1c: 0xc0e4060  jal         func_390180
label_11ca20:
    if (ctx->pc == 0x11CA20u) {
        ctx->pc = 0x11CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA1Cu;
        // 0x11ca20: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA24u;
        goto label_11ca24;
    }
    ctx->pc = 0x11CA1Cu;
    SET_GPR_U32(ctx, 31, 0x11CA24u);
    ctx->pc = 0x11CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA1Cu;
    // 0x11ca20: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11CA1Cu, 0x11CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA24u;
label_11ca24:
    // 0x11ca24: 0xc047a5e  jal         func_11E978
label_11ca28:
    if (ctx->pc == 0x11CA28u) {
        ctx->pc = 0x11CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA24u;
        // 0x11ca28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA2Cu;
        goto label_11ca2c;
    }
    ctx->pc = 0x11CA24u;
    SET_GPR_U32(ctx, 31, 0x11CA2Cu);
    ctx->pc = 0x11CA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA24u;
    // 0x11ca28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E978u, 0x11CA24u, 0x11CA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA2Cu;
label_11ca2c:
    // 0x11ca2c: 0xc04800e  jal         func_120038
label_11ca30:
    if (ctx->pc == 0x11CA30u) {
        ctx->pc = 0x11CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA2Cu;
        // 0x11ca30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA34u;
        goto label_11ca34;
    }
    ctx->pc = 0x11CA2Cu;
    SET_GPR_U32(ctx, 31, 0x11CA34u);
    ctx->pc = 0x11CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA2Cu;
    // 0x11ca30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120038u, 0x11CA2Cu, 0x11CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA34u;
label_11ca34:
    // 0x11ca34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11ca34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ca38:
    // 0x11ca38: 0x12400042  beqz        $s2, . + 4 + (0x42 << 2)
label_11ca3c:
    if (ctx->pc == 0x11CA3Cu) {
        ctx->pc = 0x11CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA38u;
        // 0x11ca3c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA40u;
        goto label_11ca40;
    }
    ctx->pc = 0x11CA38u;
    {
        const bool branch_taken_0x11ca38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA38u;
        // 0x11ca3c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca38) {
            ctx->pc = 0x11CB44u;
            goto label_11cb44;
        }
    }
    ctx->pc = 0x11CA40u;
label_11ca40:
    // 0x11ca40: 0xc0e409a  jal         func_390268
label_11ca44:
    if (ctx->pc == 0x11CA44u) {
        ctx->pc = 0x11CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA40u;
        // 0x11ca44: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA48u;
        goto label_11ca48;
    }
    ctx->pc = 0x11CA40u;
    SET_GPR_U32(ctx, 31, 0x11CA48u);
    ctx->pc = 0x11CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA40u;
    // 0x11ca44: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x11CA40u, 0x11CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA48u;
label_11ca48:
    // 0x11ca48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11ca48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ca4c:
    // 0x11ca4c: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
label_11ca50:
    if (ctx->pc == 0x11CA50u) {
        ctx->pc = 0x11CA54u;
        goto label_11ca54;
    }
    ctx->pc = 0x11CA4Cu;
    {
        const bool branch_taken_0x11ca4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ca4c) {
            ctx->pc = 0x11CB04u;
            goto label_11cb04;
        }
    }
    ctx->pc = 0x11CA54u;
label_11ca54:
    // 0x11ca54: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x11ca54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_11ca58:
    // 0x11ca58: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x11ca58u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_11ca5c:
    // 0x11ca5c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_11ca60:
    if (ctx->pc == 0x11CA60u) {
        ctx->pc = 0x11CA64u;
        goto label_11ca64;
    }
    ctx->pc = 0x11CA5Cu;
    {
        const bool branch_taken_0x11ca5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ca5c) {
            ctx->pc = 0x11CB04u;
            goto label_11cb04;
        }
    }
    ctx->pc = 0x11CA64u;
label_11ca64:
    // 0x11ca64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11ca68:
    // 0x11ca68: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11ca68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11ca6c:
    // 0x11ca6c: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11ca70:
    // 0x11ca70: 0x40f809  jalr        $v0
label_11ca74:
    if (ctx->pc == 0x11CA74u) {
        ctx->pc = 0x11CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA70u;
        // 0x11ca74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA78u;
        goto label_11ca78;
    }
    ctx->pc = 0x11CA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CA78u);
        ctx->pc = 0x11CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA70u;
        // 0x11ca74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CA70u, 0x11CA78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CA78u;
label_11ca78:
    // 0x11ca78: 0x822301b0  lb          $v1, 0x1B0($s1)
    ctx->pc = 0x11ca78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_11ca7c:
    // 0x11ca7c: 0x10430021  beq         $v0, $v1, . + 4 + (0x21 << 2)
label_11ca80:
    if (ctx->pc == 0x11CA80u) {
        ctx->pc = 0x11CA84u;
        goto label_11ca84;
    }
    ctx->pc = 0x11CA7Cu;
    {
        const bool branch_taken_0x11ca7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11ca7c) {
            ctx->pc = 0x11CB04u;
            goto label_11cb04;
        }
    }
    ctx->pc = 0x11CA84u;
label_11ca84:
    // 0x11ca84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11ca88:
    // 0x11ca88: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11ca88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11ca8c:
    // 0x11ca8c: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11ca90:
    // 0x11ca90: 0x40f809  jalr        $v0
label_11ca94:
    if (ctx->pc == 0x11CA94u) {
        ctx->pc = 0x11CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA90u;
        // 0x11ca94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA98u;
        goto label_11ca98;
    }
    ctx->pc = 0x11CA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CA98u);
        ctx->pc = 0x11CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA90u;
        // 0x11ca94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CA90u, 0x11CA98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CA98u;
label_11ca98:
    // 0x11ca98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11ca98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ca9c:
    // 0x11ca9c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x11ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11caa0:
    // 0x11caa0: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_11caa4:
    if (ctx->pc == 0x11CAA4u) {
        ctx->pc = 0x11CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAA0u;
        // 0x11caa4: 0x2862000a  slti        $v0, $v1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CAA8u;
        goto label_11caa8;
    }
    ctx->pc = 0x11CAA0u;
    {
        const bool branch_taken_0x11caa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAA0u;
        // 0x11caa4: 0x2862000a  slti        $v0, $v1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11caa0) {
            ctx->pc = 0x11CAE4u;
            goto label_11cae4;
        }
    }
    ctx->pc = 0x11CAA8u;
label_11caa8:
    // 0x11caa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11caac:
    if (ctx->pc == 0x11CAACu) {
        ctx->pc = 0x11CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAA8u;
        // 0x11caac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CAB0u;
        goto label_11cab0;
    }
    ctx->pc = 0x11CAA8u;
    {
        const bool branch_taken_0x11caa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAA8u;
        // 0x11caac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11caa8) {
            ctx->pc = 0x11CAC0u;
            goto label_11cac0;
        }
    }
    ctx->pc = 0x11CAB0u;
label_11cab0:
    // 0x11cab0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_11cab4:
    if (ctx->pc == 0x11CAB4u) {
        ctx->pc = 0x11CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAB0u;
        // 0x11cab4: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CAB8u;
        goto label_11cab8;
    }
    ctx->pc = 0x11CAB0u;
    {
        const bool branch_taken_0x11cab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11cab0) {
            ctx->pc = 0x11CAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CAB0u;
            // 0x11cab4: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CAD4u;
            goto label_11cad4;
        }
    }
    ctx->pc = 0x11CAB8u;
label_11cab8:
    // 0x11cab8: 0x10000012  b           . + 4 + (0x12 << 2)
label_11cabc:
    if (ctx->pc == 0x11CABCu) {
        ctx->pc = 0x11CAC0u;
        goto label_11cac0;
    }
    ctx->pc = 0x11CAB8u;
    {
        const bool branch_taken_0x11cab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cab8) {
            ctx->pc = 0x11CB04u;
            goto label_11cb04;
        }
    }
    ctx->pc = 0x11CAC0u;
label_11cac0:
    // 0x11cac0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x11cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_11cac4:
    // 0x11cac4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_11cac8:
    if (ctx->pc == 0x11CAC8u) {
        ctx->pc = 0x11CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAC4u;
        // 0x11cac8: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CACCu;
        goto label_11cacc;
    }
    ctx->pc = 0x11CAC4u;
    {
        const bool branch_taken_0x11cac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11cac4) {
            ctx->pc = 0x11CAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CAC4u;
            // 0x11cac8: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CAF8u;
            goto label_11caf8;
        }
    }
    ctx->pc = 0x11CACCu;
label_11cacc:
    // 0x11cacc: 0x1000000d  b           . + 4 + (0xD << 2)
label_11cad0:
    if (ctx->pc == 0x11CAD0u) {
        ctx->pc = 0x11CAD4u;
        goto label_11cad4;
    }
    ctx->pc = 0x11CACCu;
    {
        const bool branch_taken_0x11cacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cacc) {
            ctx->pc = 0x11CB04u;
            goto label_11cb04;
        }
    }
    ctx->pc = 0x11CAD4u;
label_11cad4:
    // 0x11cad4: 0xc047e78  jal         func_11F9E0
label_11cad8:
    if (ctx->pc == 0x11CAD8u) {
        ctx->pc = 0x11CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAD4u;
        // 0x11cad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CADCu;
        goto label_11cadc;
    }
    ctx->pc = 0x11CAD4u;
    SET_GPR_U32(ctx, 31, 0x11CADCu);
    ctx->pc = 0x11CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CAD4u;
    // 0x11cad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11CAD4u, 0x11CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CADCu;
label_11cadc:
    // 0x11cadc: 0x10000009  b           . + 4 + (0x9 << 2)
label_11cae0:
    if (ctx->pc == 0x11CAE0u) {
        ctx->pc = 0x11CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CADCu;
        // 0x11cae0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CAE4u;
        goto label_11cae4;
    }
    ctx->pc = 0x11CADCu;
    {
        const bool branch_taken_0x11cadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CADCu;
        // 0x11cae0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cadc) {
            ctx->pc = 0x11CB04u;
            goto label_11cb04;
        }
    }
    ctx->pc = 0x11CAE4u;
label_11cae4:
    // 0x11cae4: 0x822401b0  lb          $a0, 0x1B0($s1)
    ctx->pc = 0x11cae4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_11cae8:
    // 0x11cae8: 0xc047eec  jal         func_11FBB0
label_11caec:
    if (ctx->pc == 0x11CAECu) {
        ctx->pc = 0x11CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAE8u;
        // 0x11caec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CAF0u;
        goto label_11caf0;
    }
    ctx->pc = 0x11CAE8u;
    SET_GPR_U32(ctx, 31, 0x11CAF0u);
    ctx->pc = 0x11CAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CAE8u;
    // 0x11caec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11CAE8u, 0x11CAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAF0u;
label_11caf0:
    // 0x11caf0: 0x10000004  b           . + 4 + (0x4 << 2)
label_11caf4:
    if (ctx->pc == 0x11CAF4u) {
        ctx->pc = 0x11CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAF0u;
        // 0x11caf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CAF8u;
        goto label_11caf8;
    }
    ctx->pc = 0x11CAF0u;
    {
        const bool branch_taken_0x11caf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAF0u;
        // 0x11caf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11caf0) {
            ctx->pc = 0x11CB04u;
            goto label_11cb04;
        }
    }
    ctx->pc = 0x11CAF8u;
label_11caf8:
    // 0x11caf8: 0xc047fd4  jal         func_11FF50
label_11cafc:
    if (ctx->pc == 0x11CAFCu) {
        ctx->pc = 0x11CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAF8u;
        // 0x11cafc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB00u;
        goto label_11cb00;
    }
    ctx->pc = 0x11CAF8u;
    SET_GPR_U32(ctx, 31, 0x11CB00u);
    ctx->pc = 0x11CAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CAF8u;
    // 0x11cafc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF50u, 0x11CAF8u, 0x11CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB00u;
label_11cb00:
    // 0x11cb00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11cb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cb04:
    // 0x11cb04: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x11cb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_11cb08:
    // 0x11cb08: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x11cb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_11cb0c:
    // 0x11cb0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11cb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11cb10:
    // 0x11cb10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11cb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11cb14:
    // 0x11cb14: 0x460ea3a9  min.s       $f14, $f20, $f14
    ctx->pc = 0x11cb14u;
    ctx->f[14] = std::min(ctx->f[20], ctx->f[14]);
label_11cb18:
    // 0x11cb18: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x11cb18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_11cb1c:
    // 0x11cb1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x11cb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11cb20:
    // 0x11cb20: 0xc0508da  jal         func_142368
label_11cb24:
    if (ctx->pc == 0x11CB24u) {
        ctx->pc = 0x11CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB20u;
        // 0x11cb24: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB28u;
        goto label_11cb28;
    }
    ctx->pc = 0x11CB20u;
    SET_GPR_U32(ctx, 31, 0x11CB28u);
    ctx->pc = 0x11CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB20u;
    // 0x11cb24: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x142368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142368u, 0x11CB20u, 0x11CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB28u;
label_11cb28:
    // 0x11cb28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11cb2c:
    // 0x11cb2c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x11cb2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_11cb30:
    // 0x11cb30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x11cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_11cb34:
    // 0x11cb34: 0x40f809  jalr        $v0
label_11cb38:
    if (ctx->pc == 0x11CB38u) {
        ctx->pc = 0x11CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB34u;
        // 0x11cb38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB3Cu;
        goto label_11cb3c;
    }
    ctx->pc = 0x11CB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CB3Cu);
        ctx->pc = 0x11CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB34u;
        // 0x11cb38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CB34u, 0x11CB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CB3Cu;
label_11cb3c:
    // 0x11cb3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_11cb40:
    if (ctx->pc == 0x11CB40u) {
        ctx->pc = 0x11CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB3Cu;
        // 0x11cb40: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB44u;
        goto label_11cb44;
    }
    ctx->pc = 0x11CB3Cu;
    {
        const bool branch_taken_0x11cb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB3Cu;
        // 0x11cb40: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb3c) {
            ctx->pc = 0x11CB4Cu;
            goto label_11cb4c;
        }
    }
    ctx->pc = 0x11CB44u;
label_11cb44:
    // 0x11cb44: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x11cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_11cb48:
    // 0x11cb48: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11cb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11cb4c:
    // 0x11cb4c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11cb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11cb50:
    // 0x11cb50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11cb50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11cb54:
    // 0x11cb54: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x11cb54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11cb58:
    // 0x11cb58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11cb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11cb5c:
    // 0x11cb5c: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x11cb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_11cb60:
    // 0x11cb60: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x11cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_11cb64:
    // 0x11cb64: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x11cb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11cb68:
    // 0x11cb68: 0x3e00008  jr          $ra
label_11cb6c:
    if (ctx->pc == 0x11CB6Cu) {
        ctx->pc = 0x11CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB68u;
        // 0x11cb6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB70u;
        goto label_fallthrough_0x11cb68;
    }
    ctx->pc = 0x11CB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB68u;
        // 0x11cb6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11cb68:
    ctx->pc = 0x11CB70u;
}
