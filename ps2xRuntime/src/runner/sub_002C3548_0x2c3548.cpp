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

// Function: sub_002C3548
// Address: 0x2c3548 - 0x2c3958
void sub_002C3548_0x2c3548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3548_0x2c3548");
#endif

    switch (ctx->pc) {
        case 0x2c3588u: goto label_2c3588;
        case 0x2c3594u: goto label_2c3594;
        case 0x2c35a8u: goto label_2c35a8;
        case 0x2c35bcu: goto label_2c35bc;
        case 0x2c35ccu: goto label_2c35cc;
        case 0x2c35f4u: goto label_2c35f4;
        case 0x2c366cu: goto label_2c366c;
        case 0x2c367cu: goto label_2c367c;
        case 0x2c36c4u: goto label_2c36c4;
        case 0x2c3758u: goto label_2c3758;
        case 0x2c378cu: goto label_2c378c;
        case 0x2c37b4u: goto label_2c37b4;
        case 0x2c37d0u: goto label_2c37d0;
        case 0x2c37e4u: goto label_2c37e4;
        case 0x2c37f4u: goto label_2c37f4;
        case 0x2c3808u: goto label_2c3808;
        case 0x2c3810u: goto label_2c3810;
        case 0x2c3844u: goto label_2c3844;
        case 0x2c3868u: goto label_2c3868;
        case 0x2c389cu: goto label_2c389c;
        case 0x2c38acu: goto label_2c38ac;
        case 0x2c38f0u: goto label_2c38f0;
        case 0x2c38f8u: goto label_2c38f8;
        case 0x2c3928u: goto label_2c3928;
        case 0x2c3934u: goto label_2c3934;
        default: break;
    }

    ctx->pc = 0x2c3548u;

    // 0x2c3548: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c3548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c354c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2c354cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2c3550: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2c3550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2c3554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3558: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2c3558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2c355c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c355cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c3560: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c3560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c3564: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2c3564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2c3568: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c3568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c356c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2c356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2c3570: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2C3570u;
    {
        const bool branch_taken_0x2c3570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3570u;
        // 0x2c3574: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3570) {
            ctx->pc = 0x2C36D4u;
            goto label_2c36d4;
        }
    }
    ctx->pc = 0x2C3578u;
    // 0x2c3578: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2c3578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2c357c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c3580: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C3580u;
    SET_GPR_U32(ctx, 31, 0x2C3588u);
    ctx->pc = 0x2C3584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3580u;
    // 0x2c3584: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C3580u, 0x2C3588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3588u;
label_2c3588:
    // 0x2c3588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c358c: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2C358Cu;
    SET_GPR_U32(ctx, 31, 0x2C3594u);
    ctx->pc = 0x2C3590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C358Cu;
    // 0x2c3590: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2C358Cu, 0x2C3594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3594u;
label_2c3594:
    // 0x2c3594: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3594u;
    {
        const bool branch_taken_0x2c3594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3594) {
            ctx->pc = 0x2C3598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3594u;
            // 0x2c3598: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C35ACu;
            goto label_2c35ac;
        }
    }
    ctx->pc = 0x2C359Cu;
    // 0x2c359c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c359cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c35a0: 0xc0a3fde  jal         func_28FF78
    ctx->pc = 0x2C35A0u;
    SET_GPR_U32(ctx, 31, 0x2C35A8u);
    ctx->pc = 0x2C35A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C35A0u;
    // 0x2c35a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF78u, 0x2C35A0u, 0x2C35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35A8u;
label_2c35a8:
    // 0x2c35a8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2c35a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2c35ac:
    // 0x2c35ac: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x2c35acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2c35b0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c35b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c35b4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C35B4u;
    SET_GPR_U32(ctx, 31, 0x2C35BCu);
    ctx->pc = 0x2C35B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C35B4u;
    // 0x2c35b8: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C35B4u, 0x2C35BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35BCu;
label_2c35bc:
    // 0x2c35bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c35bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c35c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c35c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c35c4: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2C35C4u;
    SET_GPR_U32(ctx, 31, 0x2C35CCu);
    ctx->pc = 0x2C35C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C35C4u;
    // 0x2c35c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2C35C4u, 0x2C35CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35CCu;
label_2c35cc:
    // 0x2c35cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c35ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c35d0: 0x5200002b  beql        $s0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C35D0u;
    {
        const bool branch_taken_0x2c35d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c35d0) {
            ctx->pc = 0x2C35D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C35D0u;
            // 0x2c35d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3680u;
            goto label_2c3680;
        }
    }
    ctx->pc = 0x2C35D8u;
    // 0x2c35d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c35dc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2c35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2c35e0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c35e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c35e4: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C35E4u;
    {
        const bool branch_taken_0x2c35e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c35e4) {
            ctx->pc = 0x2C35E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C35E4u;
            // 0x2c35e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3680u;
            goto label_2c3680;
        }
    }
    ctx->pc = 0x2C35ECu;
    // 0x2c35ec: 0xc087420  jal         func_21D080
    ctx->pc = 0x2C35ECu;
    SET_GPR_U32(ctx, 31, 0x2C35F4u);
    ctx->pc = 0x2C35F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C35ECu;
    // 0x2c35f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2C35ECu, 0x2C35F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35F4u;
label_2c35f4:
    // 0x2c35f4: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2c35f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c35f8: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2c35f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2c35fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c35fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3600: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c3600u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3604: 0x0  nop
    ctx->pc = 0x2c3604u;
    // NOP
    // 0x2c3608: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2C3608u;
    {
        const bool branch_taken_0x2c3608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3608u;
        // 0x2c360c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3608) {
            ctx->pc = 0x2C3658u;
            goto label_2c3658;
        }
    }
    ctx->pc = 0x2C3610u;
    // 0x2c3610: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c3610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3614: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c3614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3618: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c3618u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c361c: 0x0  nop
    ctx->pc = 0x2c361cu;
    // NOP
    // 0x2c3620: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x2C3620u;
    {
        const bool branch_taken_0x2c3620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3620) {
            ctx->pc = 0x2C3624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3620u;
            // 0x2c3624: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C365Cu;
            goto label_2c365c;
        }
    }
    ctx->pc = 0x2C3628u;
    // 0x2c3628: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2c3628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c362c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3630: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c3630u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3634: 0x0  nop
    ctx->pc = 0x2c3634u;
    // NOP
    // 0x2c3638: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3638u;
    {
        const bool branch_taken_0x2c3638 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3638) {
            ctx->pc = 0x2C363Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3638u;
            // 0x2c363c: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C365Cu;
            goto label_2c365c;
        }
    }
    ctx->pc = 0x2C3640u;
    // 0x2c3640: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2c3640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3644: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c3644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3648: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c3648u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c364c: 0x0  nop
    ctx->pc = 0x2c364cu;
    // NOP
    // 0x2c3650: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C3650u;
    {
        const bool branch_taken_0x2c3650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3650) {
            ctx->pc = 0x2C3654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3650u;
            // 0x2c3654: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3658u;
            goto label_2c3658;
        }
    }
    ctx->pc = 0x2C3658u;
label_2c3658:
    // 0x2c3658: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x2c3658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_2c365c:
    // 0x2c365c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C365Cu;
    {
        const bool branch_taken_0x2c365c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c365c) {
            ctx->pc = 0x2C3660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C365Cu;
            // 0x2c3660: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3680u;
            goto label_2c3680;
        }
    }
    ctx->pc = 0x2C3664u;
    // 0x2c3664: 0xc087420  jal         func_21D080
    ctx->pc = 0x2C3664u;
    SET_GPR_U32(ctx, 31, 0x2C366Cu);
    ctx->pc = 0x2C3668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3664u;
    // 0x2c3668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2C3664u, 0x2C366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C366Cu;
label_2c366c:
    // 0x2c366c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c366cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3670: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c3670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c3674: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2C3674u;
    SET_GPR_U32(ctx, 31, 0x2C367Cu);
    ctx->pc = 0x2C3678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3674u;
    // 0x2c3678: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2C3674u, 0x2C367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C367Cu;
label_2c367c:
    // 0x2c367c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3680:
    // 0x2c3680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3684: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x2c3684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c3688: 0x56020013  bnel        $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C3688u;
    {
        const bool branch_taken_0x2c3688 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3688) {
            ctx->pc = 0x2C368Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3688u;
            // 0x2c368c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C36D8u;
            goto label_2c36d8;
        }
    }
    ctx->pc = 0x2C3690u;
    // 0x2c3690: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2c3690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c3694: 0x10700003  beq         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3694u;
    {
        const bool branch_taken_0x2c3694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3694u;
        // 0x2c3698: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3694) {
            ctx->pc = 0x2C36A4u;
            goto label_2c36a4;
        }
    }
    ctx->pc = 0x2C369Cu;
    // 0x2c369c: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C369Cu;
    {
        const bool branch_taken_0x2c369c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c369c) {
            ctx->pc = 0x2C36A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C369Cu;
            // 0x2c36a0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C36D8u;
            goto label_2c36d8;
        }
    }
    ctx->pc = 0x2C36A4u;
label_2c36a4:
    // 0x2c36a4: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2c36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2c36a8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c36a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c36ac: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2C36ACu;
    {
        const bool branch_taken_0x2c36ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c36ac) {
            ctx->pc = 0x2C36B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C36ACu;
            // 0x2c36b0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C36D8u;
            goto label_2c36d8;
        }
    }
    ctx->pc = 0x2C36B4u;
    // 0x2c36b4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2c36b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2c36b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c36b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c36bc: 0xc0b0cb0  jal         func_2C32C0
    ctx->pc = 0x2C36BCu;
    SET_GPR_U32(ctx, 31, 0x2C36C4u);
    ctx->pc = 0x2C36C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C36BCu;
    // 0x2c36c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C32C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C32C0u, 0x2C36BCu, 0x2C36C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36C4u;
label_2c36c4:
    // 0x2c36c4: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C36C4u;
    {
        const bool branch_taken_0x2c36c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c36c4) {
            ctx->pc = 0x2C36C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C36C4u;
            // 0x2c36c8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C36D8u;
            goto label_2c36d8;
        }
    }
    ctx->pc = 0x2C36CCu;
    // 0x2c36cc: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2C36CCu;
    {
        const bool branch_taken_0x2c36cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36CCu;
        // 0x2c36d0: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36cc) {
            ctx->pc = 0x2C3934u;
            goto label_2c3934;
        }
    }
    ctx->pc = 0x2C36D4u;
label_2c36d4:
    // 0x2c36d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c36d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c36d8:
    // 0x2c36d8: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2c36d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2c36dc: 0x1c400095  bgtz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x2C36DCu;
    {
        const bool branch_taken_0x2c36dc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36DCu;
        // 0x2c36e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36dc) {
            ctx->pc = 0x2C3934u;
            goto label_2c3934;
        }
    }
    ctx->pc = 0x2C36E4u;
    // 0x2c36e4: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2c36e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    // 0x2c36e8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2C36E8u;
    {
        const bool branch_taken_0x2c36e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c36e8) {
            ctx->pc = 0x2C36ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C36E8u;
            // 0x2c36ec: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3724u;
            goto label_2c3724;
        }
    }
    ctx->pc = 0x2C36F0u;
    // 0x2c36f0: 0xac600284  sw          $zero, 0x284($v1)
    ctx->pc = 0x2c36f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
    // 0x2c36f4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2c36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2c36f8: 0x54400070  bnel        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x2C36F8u;
    {
        const bool branch_taken_0x2c36f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c36f8) {
            ctx->pc = 0x2C36FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C36F8u;
            // 0x2c36fc: 0x8e230038  lw          $v1, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C38BCu;
            goto label_2c38bc;
        }
    }
    ctx->pc = 0x2C3700u;
    // 0x2c3700: 0x92220040  lbu         $v0, 0x40($s1)
    ctx->pc = 0x2c3700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2c3704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c3704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c3708: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c370c: 0x2c630005  sltiu       $v1, $v1, 0x5
    ctx->pc = 0x2c370cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c3710: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3710u;
    {
        const bool branch_taken_0x2c3710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3710u;
        // 0x2c3714: 0xa2220040  sb          $v0, 0x40($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3710) {
            ctx->pc = 0x2C3720u;
            goto label_2c3720;
        }
    }
    ctx->pc = 0x2C3718u;
    // 0x2c3718: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2C3718u;
    {
        const bool branch_taken_0x2c3718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3718u;
        // 0x2c371c: 0xae240038  sw          $a0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3718) {
            ctx->pc = 0x2C3934u;
            goto label_2c3934;
        }
    }
    ctx->pc = 0x2C3720u;
label_2c3720:
    // 0x2c3720: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2c3720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2c3724:
    // 0x2c3724: 0x54400065  bnel        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x2C3724u;
    {
        const bool branch_taken_0x2c3724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3724) {
            ctx->pc = 0x2C3728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3724u;
            // 0x2c3728: 0x8e230038  lw          $v1, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C38BCu;
            goto label_2c38bc;
        }
    }
    ctx->pc = 0x2C372Cu;
    // 0x2c372c: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2c372cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x2c3730: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c3730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2c3734: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2c3734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2c3738: 0x26340020  addiu       $s4, $s1, 0x20
    ctx->pc = 0x2c3738u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2c373c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2c373cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2c3740: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c3740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3744: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c3744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c3748: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c3748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c374c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2c374cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c3750: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2C3750u;
    SET_GPR_U32(ctx, 31, 0x2C3758u);
    ctx->pc = 0x2C3754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3750u;
    // 0x2c3754: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C3750u, 0x2C3758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3758u;
label_2c3758:
    // 0x2c3758: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2c3758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x2c375c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c375cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3760: 0x0  nop
    ctx->pc = 0x2c3760u;
    // NOP
    // 0x2c3764: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c3764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3768: 0x0  nop
    ctx->pc = 0x2c3768u;
    // NOP
    // 0x2c376c: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x2C376Cu;
    {
        const bool branch_taken_0x2c376c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C376Cu;
        // 0x2c3770: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c376c) {
            ctx->pc = 0x2C38A4u;
            goto label_2c38a4;
        }
    }
    ctx->pc = 0x2C3774u;
    // 0x2c3774: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c3774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c3778: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c3778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c377c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2c377cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x2c3780: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c3780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c3784: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2C3784u;
    SET_GPR_U32(ctx, 31, 0x2C378Cu);
    ctx->pc = 0x2C3788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3784u;
    // 0x2c3788: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2C3784u, 0x2C378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C378Cu;
label_2c378c:
    // 0x2c378c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2c378cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c3790: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2c3790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2c3794: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2c3794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2c3798: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c3798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c379c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c379cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2c37a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c37a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c37a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c37a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37ac: 0xc0a7cf2  jal         func_29F3C8
    ctx->pc = 0x2C37ACu;
    SET_GPR_U32(ctx, 31, 0x2C37B4u);
    ctx->pc = 0x2C37B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C37ACu;
    // 0x2c37b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2C37ACu, 0x2C37B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C37B4u;
label_2c37b4:
    // 0x2c37b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c37b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c37bc: 0x56020023  bnel        $s0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C37BCu;
    {
        const bool branch_taken_0x2c37bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c37bc) {
            ctx->pc = 0x2C37C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C37BCu;
            // 0x2c37c0: 0x92220040  lbu         $v0, 0x40($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C384Cu;
            goto label_2c384c;
        }
    }
    ctx->pc = 0x2C37C4u;
    // 0x2c37c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c37c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c37c8: 0xc0a3fce  jal         func_28FF38
    ctx->pc = 0x2C37C8u;
    SET_GPR_U32(ctx, 31, 0x2C37D0u);
    ctx->pc = 0x2C37CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C37C8u;
    // 0x2c37cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2C37C8u, 0x2C37D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C37D0u;
label_2c37d0:
    // 0x2c37d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c37d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37d4: 0x16500058  bne         $s2, $s0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2C37D4u;
    {
        const bool branch_taken_0x2c37d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2C37D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37D4u;
        // 0x2c37d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37d4) {
            ctx->pc = 0x2C3938u;
            goto label_2c3938;
        }
    }
    ctx->pc = 0x2C37DCu;
    // 0x2c37dc: 0xc092414  jal         func_249050
    ctx->pc = 0x2C37DCu;
    SET_GPR_U32(ctx, 31, 0x2C37E4u);
    ctx->pc = 0x2C37E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C37DCu;
    // 0x2c37e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249050u, 0x2C37DCu, 0x2C37E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C37E4u;
label_2c37e4:
    // 0x2c37e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C37E4u;
    {
        const bool branch_taken_0x2c37e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c37e4) {
            ctx->pc = 0x2C37E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C37E4u;
            // 0x2c37e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3800u;
            goto label_2c3800;
        }
    }
    ctx->pc = 0x2C37ECu;
    // 0x2c37ec: 0xc092414  jal         func_249050
    ctx->pc = 0x2C37ECu;
    SET_GPR_U32(ctx, 31, 0x2C37F4u);
    ctx->pc = 0x2C37F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C37ECu;
    // 0x2c37f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249050u, 0x2C37ECu, 0x2C37F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C37F4u;
label_2c37f4:
    // 0x2c37f4: 0x14520050  bne         $v0, $s2, . + 4 + (0x50 << 2)
    ctx->pc = 0x2C37F4u;
    {
        const bool branch_taken_0x2c37f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2C37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37F4u;
        // 0x2c37f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37f4) {
            ctx->pc = 0x2C3938u;
            goto label_2c3938;
        }
    }
    ctx->pc = 0x2C37FCu;
    // 0x2c37fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c37fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3800:
    // 0x2c3800: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x2C3800u;
    SET_GPR_U32(ctx, 31, 0x2C3808u);
    ctx->pc = 0x2C3804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3800u;
    // 0x2c3804: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2C3800u, 0x2C3808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3808u;
label_2c3808:
    // 0x2c3808: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2C3808u;
    SET_GPR_U32(ctx, 31, 0x2C3810u);
    ctx->pc = 0x2C380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3808u;
    // 0x2c380c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C3808u, 0x2C3810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3810u;
label_2c3810:
    // 0x2c3810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c3810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3814: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2C3814u;
    {
        const bool branch_taken_0x2c3814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3814u;
        // 0x2c3818: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3814) {
            ctx->pc = 0x2C3934u;
            goto label_2c3934;
        }
    }
    ctx->pc = 0x2C381Cu;
    // 0x2c381c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c381cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c3820: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c3820u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2c3824: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2c3824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3828: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c3828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c382c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c382cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c3830: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c3830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c3834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c3834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3838: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c3838u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c383c: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2C383Cu;
    SET_GPR_U32(ctx, 31, 0x2C3844u);
    ctx->pc = 0x2C3840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C383Cu;
    // 0x2c3840: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C383Cu, 0x2C3844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3844u;
label_2c3844:
    // 0x2c3844: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2C3844u;
    {
        const bool branch_taken_0x2c3844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3844u;
        // 0x2c3848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3844) {
            ctx->pc = 0x2C3938u;
            goto label_2c3938;
        }
    }
    ctx->pc = 0x2C384Cu;
label_2c384c:
    // 0x2c384c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c3850: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3854: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x2c3854u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c3858: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2C3858u;
    {
        const bool branch_taken_0x2c3858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3858u;
        // 0x2c385c: 0xa2220040  sb          $v0, 0x40($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3858) {
            ctx->pc = 0x2C3934u;
            goto label_2c3934;
        }
    }
    ctx->pc = 0x2C3860u;
    // 0x2c3860: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2C3860u;
    SET_GPR_U32(ctx, 31, 0x2C3868u);
    ctx->pc = 0x2C3864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3860u;
    // 0x2c3864: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C3860u, 0x2C3868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3868u;
label_2c3868:
    // 0x2c3868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c3868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c386c: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2C386Cu;
    {
        const bool branch_taken_0x2c386c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C386Cu;
        // 0x2c3870: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c386c) {
            ctx->pc = 0x2C3934u;
            goto label_2c3934;
        }
    }
    ctx->pc = 0x2C3874u;
    // 0x2c3874: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c3874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c3878: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c3878u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2c387c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c387cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3880: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c3880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c3884: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c3884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c3888: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c3888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c388c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c388cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3890: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c3890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3894: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2C3894u;
    SET_GPR_U32(ctx, 31, 0x2C389Cu);
    ctx->pc = 0x2C3898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3894u;
    // 0x2c3898: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C3894u, 0x2C389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C389Cu;
label_2c389c:
    // 0x2c389c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C389Cu;
    {
        const bool branch_taken_0x2c389c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C389Cu;
        // 0x2c38a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c389c) {
            ctx->pc = 0x2C3938u;
            goto label_2c3938;
        }
    }
    ctx->pc = 0x2C38A4u;
label_2c38a4:
    // 0x2c38a4: 0xc0b0c02  jal         func_2C3008
    ctx->pc = 0x2C38A4u;
    SET_GPR_U32(ctx, 31, 0x2C38ACu);
    ctx->pc = 0x2C38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C38A4u;
    // 0x2c38a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3008u, 0x2C38A4u, 0x2C38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C38ACu;
label_2c38ac:
    // 0x2c38ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c38acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c38b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c38b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38b4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C38B4u;
    {
        const bool branch_taken_0x2c38b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38B4u;
        // 0x2c38b8: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38b4) {
            ctx->pc = 0x2C3938u;
            goto label_2c3938;
        }
    }
    ctx->pc = 0x2C38BCu;
label_2c38bc:
    // 0x2c38bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c38c0: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C38C0u;
    {
        const bool branch_taken_0x2c38c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38C0u;
        // 0x2c38c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38c0) {
            ctx->pc = 0x2C3938u;
            goto label_2c3938;
        }
    }
    ctx->pc = 0x2C38C8u;
    // 0x2c38c8: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2c38c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x2c38cc: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2c38ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2c38d0: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2c38d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x2c38d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c38d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c38d8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2c38dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c38dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38e0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2c38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c38e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c38e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38e8: 0xc105df6  jal         func_4177D8
    ctx->pc = 0x2C38E8u;
    SET_GPR_U32(ctx, 31, 0x2C38F0u);
    ctx->pc = 0x2C38ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C38E8u;
    // 0x2c38ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2C38E8u, 0x2C38F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C38F0u;
label_2c38f0:
    // 0x2c38f0: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2C38F0u;
    SET_GPR_U32(ctx, 31, 0x2C38F8u);
    ctx->pc = 0x2C38F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C38F0u;
    // 0x2c38f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C38F0u, 0x2C38F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C38F8u;
label_2c38f8:
    // 0x2c38f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c38f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38fc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C38FCu;
    {
        const bool branch_taken_0x2c38fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38FCu;
        // 0x2c3900: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38fc) {
            ctx->pc = 0x2C3928u;
            goto label_2c3928;
        }
    }
    ctx->pc = 0x2C3904u;
    // 0x2c3904: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c3904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c3908: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c3908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c390c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c390cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3910: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c3910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2c3914: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2c3914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2c3918: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c3918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c391c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c391cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c3920: 0xc0b6a3e  jal         func_2DA8F8
    ctx->pc = 0x2C3920u;
    SET_GPR_U32(ctx, 31, 0x2C3928u);
    ctx->pc = 0x2C3924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3920u;
    // 0x2c3924: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8F8u, 0x2C3920u, 0x2C3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3928u;
label_2c3928:
    // 0x2c3928: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c3928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c392c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2C392Cu;
    SET_GPR_U32(ctx, 31, 0x2C3934u);
    ctx->pc = 0x2C3930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C392Cu;
    // 0x2c3930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C392Cu, 0x2C3934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3934u;
label_2c3934:
    // 0x2c3934: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3938:
    // 0x2c3938: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2c3938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c393c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2c393cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c3940: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2c3940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c3944: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2c3944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c3948: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c3948u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c394c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c394cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3950: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3950u;
        // 0x2c3954: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3958u;
}
