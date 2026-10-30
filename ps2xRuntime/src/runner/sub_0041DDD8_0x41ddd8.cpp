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

// Function: sub_0041DDD8
// Address: 0x41ddd8 - 0x41ded0
void sub_0041DDD8_0x41ddd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DDD8_0x41ddd8");
#endif

    switch (ctx->pc) {
        case 0x41ddf8u: goto label_41ddf8;
        case 0x41de00u: goto label_41de00;
        case 0x41de4cu: goto label_41de4c;
        case 0x41de58u: goto label_41de58;
        case 0x41de70u: goto label_41de70;
        case 0x41dea0u: goto label_41dea0;
        case 0x41deb0u: goto label_41deb0;
        case 0x41deb8u: goto label_41deb8;
        default: break;
    }

    ctx->pc = 0x41ddd8u;

    // 0x41ddd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41ddd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x41dddc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x41dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x41dde0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x41dde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x41dde4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x41dde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x41dde8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41dde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x41ddec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41ddecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41ddf0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x41DDF0u;
    SET_GPR_U32(ctx, 31, 0x41DDF8u);
    ctx->pc = 0x41DDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DDF0u;
    // 0x41ddf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x41DDF0u, 0x41DDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DDF8u;
label_41ddf8:
    // 0x41ddf8: 0xc105e98  jal         func_417A60
    ctx->pc = 0x41DDF8u;
    SET_GPR_U32(ctx, 31, 0x41DE00u);
    ctx->pc = 0x41DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DDF8u;
    // 0x41ddfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x41DDF8u, 0x41DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DE00u;
label_41de00:
    // 0x41de00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41de00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41de04: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x41DE04u;
    {
        const bool branch_taken_0x41de04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DE04u;
        // 0x41de08: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41de04) {
            ctx->pc = 0x41DEB8u;
            goto label_41deb8;
        }
    }
    ctx->pc = 0x41DE0Cu;
    // 0x41de0c: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x41de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x41de10: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x41de10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x41de14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x41de14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x41de18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x41de18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x41de1c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x41de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x41de20: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x41de20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x41de24: 0x3c06007c  lui         $a2, 0x7C
    ctx->pc = 0x41de24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)124 << 16));
    // 0x41de28: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x41de28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x41de2c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x41de2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x41de30: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x41de30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x41de34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41de34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41de38: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x41de38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x41de3c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x41de3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x41de40: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x41de40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x41de44: 0xc0e8b36  jal         func_3A2CD8
    ctx->pc = 0x41DE44u;
    SET_GPR_U32(ctx, 31, 0x41DE4Cu);
    ctx->pc = 0x41DE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DE44u;
    // 0x41de48: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x41DE44u, 0x41DE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DE4Cu;
label_41de4c:
    // 0x41de4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41de4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41de50: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x41DE50u;
    SET_GPR_U32(ctx, 31, 0x41DE58u);
    ctx->pc = 0x41DE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DE50u;
    // 0x41de54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x41DE50u, 0x41DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DE58u;
label_41de58:
    // 0x41de58: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x41de58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x41de5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41de5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41de60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41de60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41de64: 0x24c6b248  addiu       $a2, $a2, -0x4DB8
    ctx->pc = 0x41de64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947400));
    // 0x41de68: 0xc0e71f6  jal         func_39C7D8
    ctx->pc = 0x41DE68u;
    SET_GPR_U32(ctx, 31, 0x41DE70u);
    ctx->pc = 0x41DE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DE68u;
    // 0x41de6c: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C7D8u, 0x41DE68u, 0x41DE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DE70u;
label_41de70:
    // 0x41de70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41de70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41de74: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x41DE74u;
    {
        const bool branch_taken_0x41de74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DE74u;
        // 0x41de78: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41de74) {
            ctx->pc = 0x41DEB8u;
            goto label_41deb8;
        }
    }
    ctx->pc = 0x41DE7Cu;
    // 0x41de7c: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x41de7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
    // 0x41de80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x41de80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x41de84: 0x0  nop
    ctx->pc = 0x41de84u;
    // NOP
    // 0x41de88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x41de88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41de8c: 0x0  nop
    ctx->pc = 0x41de8cu;
    // NOP
    // 0x41de90: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x41DE90u;
    {
        const bool branch_taken_0x41de90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41de90) {
            ctx->pc = 0x41DE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41DE90u;
            // 0x41de94: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41DEBCu;
            goto label_41debc;
        }
    }
    ctx->pc = 0x41DE98u;
    // 0x41de98: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x41DE98u;
    SET_GPR_U32(ctx, 31, 0x41DEA0u);
    ctx->pc = 0x41DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DE98u;
    // 0x41de9c: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x41DE98u, 0x41DEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DEA0u;
label_41dea0:
    // 0x41dea0: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x41dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x41dea4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41dea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dea8: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x41DEA8u;
    SET_GPR_U32(ctx, 31, 0x41DEB0u);
    ctx->pc = 0x41DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DEA8u;
    // 0x41deac: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x41DEA8u, 0x41DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DEB0u;
label_41deb0:
    // 0x41deb0: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x41DEB0u;
    SET_GPR_U32(ctx, 31, 0x41DEB8u);
    ctx->pc = 0x41DEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DEB0u;
    // 0x41deb4: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x41DEB0u, 0x41DEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DEB8u;
label_41deb8:
    // 0x41deb8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x41deb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41debc:
    // 0x41debc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x41debcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41dec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41dec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41dec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41dec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41dec8: 0x3e00008  jr          $ra
    ctx->pc = 0x41DEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DEC8u;
        // 0x41decc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DED0u;
}
