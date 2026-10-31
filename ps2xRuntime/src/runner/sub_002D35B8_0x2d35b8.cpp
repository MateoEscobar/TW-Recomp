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

// Function: sub_002D35B8
// Address: 0x2d35b8 - 0x2d3940
void sub_002D35B8_0x2d35b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D35B8_0x2d35b8");
#endif

    switch (ctx->pc) {
        case 0x2d35f4u: goto label_2d35f4;
        case 0x2d3604u: goto label_2d3604;
        case 0x2d3610u: goto label_2d3610;
        case 0x2d362cu: goto label_2d362c;
        case 0x2d3648u: goto label_2d3648;
        case 0x2d3680u: goto label_2d3680;
        case 0x2d368cu: goto label_2d368c;
        case 0x2d36bcu: goto label_2d36bc;
        case 0x2d36c8u: goto label_2d36c8;
        case 0x2d36dcu: goto label_2d36dc;
        case 0x2d36f8u: goto label_2d36f8;
        case 0x2d3714u: goto label_2d3714;
        case 0x2d3728u: goto label_2d3728;
        case 0x2d3740u: goto label_2d3740;
        case 0x2d3760u: goto label_2d3760;
        case 0x2d3774u: goto label_2d3774;
        case 0x2d3780u: goto label_2d3780;
        case 0x2d37a0u: goto label_2d37a0;
        case 0x2d37a8u: goto label_2d37a8;
        case 0x2d37f8u: goto label_2d37f8;
        case 0x2d3870u: goto label_2d3870;
        case 0x2d3880u: goto label_2d3880;
        case 0x2d3898u: goto label_2d3898;
        case 0x2d38c8u: goto label_2d38c8;
        case 0x2d38dcu: goto label_2d38dc;
        case 0x2d38f4u: goto label_2d38f4;
        case 0x2d390cu: goto label_2d390c;
        case 0x2d391cu: goto label_2d391c;
        default: break;
    }

    ctx->pc = 0x2d35b8u;

    // 0x2d35b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d35b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d35bc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2d35bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2d35c0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2d35c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2d35c4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2d35c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d35c8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2d35c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2d35cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d35ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d35d0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2d35d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2d35d4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2d35d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2d35d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d35d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d35dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d35dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d35e0: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d35e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2d35e4: 0x1c4000cd  bgtz        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x2D35E4u;
    {
        const bool branch_taken_0x2d35e4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D35E4u;
        // 0x2d35e8: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d35e4) {
            ctx->pc = 0x2D391Cu;
            goto label_2d391c;
        }
    }
    ctx->pc = 0x2D35ECu;
    // 0x2d35ec: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2D35ECu;
    SET_GPR_U32(ctx, 31, 0x2D35F4u);
    ctx->pc = 0x2D35F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D35ECu;
    // 0x2d35f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2D35ECu, 0x2D35F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D35F4u;
label_2d35f4:
    // 0x2d35f4: 0x105000ca  beq         $v0, $s0, . + 4 + (0xCA << 2)
    ctx->pc = 0x2D35F4u;
    {
        const bool branch_taken_0x2d35f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D35F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D35F4u;
        // 0x2d35f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d35f4) {
            ctx->pc = 0x2D3920u;
            goto label_2d3920;
        }
    }
    ctx->pc = 0x2D35FCu;
    // 0x2d35fc: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2D35FCu;
    SET_GPR_U32(ctx, 31, 0x2D3604u);
    ctx->pc = 0x2D3600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D35FCu;
    // 0x2d3600: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2D35FCu, 0x2D3604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3604u;
label_2d3604:
    // 0x2d3604: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d3604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d3608: 0xc0a3398  jal         func_28CE60
    ctx->pc = 0x2D3608u;
    SET_GPR_U32(ctx, 31, 0x2D3610u);
    ctx->pc = 0x2D360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3608u;
    // 0x2d360c: 0x82450031  lb          $a1, 0x31($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE60u, 0x2D3608u, 0x2D3610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3610u;
label_2d3610:
    // 0x2d3610: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d3610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d3614: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2d3614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    // 0x2d3618: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3618u;
    {
        const bool branch_taken_0x2d3618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3618) {
            ctx->pc = 0x2D361Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3618u;
            // 0x2d361c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3638u;
            goto label_2d3638;
        }
    }
    ctx->pc = 0x2D3620u;
    // 0x2d3620: 0xac600284  sw          $zero, 0x284($v1)
    ctx->pc = 0x2d3620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
    // 0x2d3624: 0xc0b4ce0  jal         func_2D3380
    ctx->pc = 0x2D3624u;
    SET_GPR_U32(ctx, 31, 0x2D362Cu);
    ctx->pc = 0x2D3628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3624u;
    // 0x2d3628: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3380u, 0x2D3624u, 0x2D362Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D362Cu;
label_2d362c:
    // 0x2d362c: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x2D362Cu;
    {
        const bool branch_taken_0x2d362c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D362Cu;
        // 0x2d3630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d362c) {
            ctx->pc = 0x2D3920u;
            goto label_2d3920;
        }
    }
    ctx->pc = 0x2D3634u;
    // 0x2d3634: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d3634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d3638:
    // 0x2d3638: 0x26710090  addiu       $s1, $s3, 0x90
    ctx->pc = 0x2d3638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x2d363c: 0x3c140071  lui         $s4, 0x71
    ctx->pc = 0x2d363cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)113 << 16));
    // 0x2d3640: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x2D3640u;
    SET_GPR_U32(ctx, 31, 0x2D3648u);
    ctx->pc = 0x2D3644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3640u;
    // 0x2d3644: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2D3640u, 0x2D3648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3648u;
label_2d3648:
    // 0x2d3648: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2D3648u;
    {
        const bool branch_taken_0x2d3648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3648u;
        // 0x2d364c: 0x26824b00  addiu       $v0, $s4, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3648) {
            ctx->pc = 0x2D371Cu;
            goto label_2d371c;
        }
    }
    ctx->pc = 0x2D3650u;
    // 0x2d3650: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2d3650u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d3654: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d3654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d3658: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2d3658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d365c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2d365cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x2d3660: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2d3660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x2d3664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d3664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3668: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d3668u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d366c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2d366cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d3670: 0x248401a4  addiu       $a0, $a0, 0x1A4
    ctx->pc = 0x2d3670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    // 0x2d3674: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2d3674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d3678: 0xc136d6c  jal         func_4DB5B0
    ctx->pc = 0x2D3678u;
    SET_GPR_U32(ctx, 31, 0x2D3680u);
    ctx->pc = 0x2D367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3678u;
    // 0x2d367c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x2D3678u, 0x2D3680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3680u;
label_2d3680:
    // 0x2d3680: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2d3680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2d3684: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2D3684u;
    SET_GPR_U32(ctx, 31, 0x2D368Cu);
    ctx->pc = 0x2D3688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3684u;
    // 0x2d3688: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D3684u, 0x2D368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D368Cu;
label_2d368c:
    // 0x2d368c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d368cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3690: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D3690u;
    {
        const bool branch_taken_0x2d3690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3690u;
        // 0x2d3694: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3690) {
            ctx->pc = 0x2D371Cu;
            goto label_2d371c;
        }
    }
    ctx->pc = 0x2D3698u;
    // 0x2d3698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d3698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d369c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d369cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d36a0: 0x0  nop
    ctx->pc = 0x2d36a0u;
    // NOP
    // 0x2d36a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d36a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d36a8: 0x0  nop
    ctx->pc = 0x2d36a8u;
    // NOP
    // 0x2d36ac: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2D36ACu;
    {
        const bool branch_taken_0x2d36ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36ACu;
        // 0x2d36b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36ac) {
            ctx->pc = 0x2D3720u;
            goto label_2d3720;
        }
    }
    ctx->pc = 0x2D36B4u;
    // 0x2d36b4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D36B4u;
    SET_GPR_U32(ctx, 31, 0x2D36BCu);
    ctx->pc = 0x2D36B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D36B4u;
    // 0x2d36b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D36B4u, 0x2D36BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36BCu;
label_2d36bc:
    // 0x2d36bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d36bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d36c0: 0xc0a408c  jal         func_290230
    ctx->pc = 0x2D36C0u;
    SET_GPR_U32(ctx, 31, 0x2D36C8u);
    ctx->pc = 0x2D36C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D36C0u;
    // 0x2d36c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2D36C0u, 0x2D36C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36C8u;
label_2d36c8:
    // 0x2d36c8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D36C8u;
    {
        const bool branch_taken_0x2d36c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36C8u;
        // 0x2d36cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36c8) {
            ctx->pc = 0x2D3720u;
            goto label_2d3720;
        }
    }
    ctx->pc = 0x2D36D0u;
    // 0x2d36d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d36d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d36d4: 0xc0891de  jal         func_224778
    ctx->pc = 0x2D36D4u;
    SET_GPR_U32(ctx, 31, 0x2D36DCu);
    ctx->pc = 0x2D36D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D36D4u;
    // 0x2d36d8: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2D36D4u, 0x2D36DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36DCu;
label_2d36dc:
    // 0x2d36dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d36dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d36e0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D36E0u;
    {
        const bool branch_taken_0x2d36e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36E0u;
        // 0x2d36e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36e0) {
            ctx->pc = 0x2D3720u;
            goto label_2d3720;
        }
    }
    ctx->pc = 0x2D36E8u;
    // 0x2d36e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d36e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d36ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d36ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d36f0: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2D36F0u;
    SET_GPR_U32(ctx, 31, 0x2D36F8u);
    ctx->pc = 0x2D36F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D36F0u;
    // 0x2d36f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2D36F0u, 0x2D36F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36F8u;
label_2d36f8:
    // 0x2d36f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d36f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d36fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d36fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3700: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d3700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d3704: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d3704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d3708: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x2d3708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2d370c: 0xc0a3892  jal         func_28E248
    ctx->pc = 0x2D370Cu;
    SET_GPR_U32(ctx, 31, 0x2D3714u);
    ctx->pc = 0x2D3710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D370Cu;
    // 0x2d3710: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2D370Cu, 0x2D3714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3714u;
label_2d3714:
    // 0x2d3714: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2D3714u;
    {
        const bool branch_taken_0x2d3714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3714u;
        // 0x2d3718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3714) {
            ctx->pc = 0x2D3920u;
            goto label_2d3920;
        }
    }
    ctx->pc = 0x2D371Cu;
label_2d371c:
    // 0x2d371c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d371cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d3720:
    // 0x2d3720: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2D3720u;
    SET_GPR_U32(ctx, 31, 0x2D3728u);
    ctx->pc = 0x2D3724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3720u;
    // 0x2d3724: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2D3720u, 0x2D3728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3728u;
label_2d3728:
    // 0x2d3728: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2d3728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d372c: 0x26824b00  addiu       $v0, $s4, 0x4B00
    ctx->pc = 0x2d372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 19200));
    // 0x2d3730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d3730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3734: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d3734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d3738: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2D3738u;
    SET_GPR_U32(ctx, 31, 0x2D3740u);
    ctx->pc = 0x2D373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3738u;
    // 0x2d373c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D3738u, 0x2D3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3740u;
label_2d3740:
    // 0x2d3740: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x2d3740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3744: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2d3744u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d3748: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d3748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d374c: 0x0  nop
    ctx->pc = 0x2d374cu;
    // NOP
    // 0x2d3750: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x2D3750u;
    {
        const bool branch_taken_0x2d3750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3750u;
        // 0x2d3754: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3750) {
            ctx->pc = 0x2D3800u;
            goto label_2d3800;
        }
    }
    ctx->pc = 0x2D3758u;
    // 0x2d3758: 0xc08a05a  jal         func_228168
    ctx->pc = 0x2D3758u;
    SET_GPR_U32(ctx, 31, 0x2D3760u);
    ctx->pc = 0x2D375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3758u;
    // 0x2d375c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x2D3758u, 0x2D3760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3760u;
label_2d3760:
    // 0x2d3760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3764: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3764u;
    {
        const bool branch_taken_0x2d3764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d3764) {
            ctx->pc = 0x2D3768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3764u;
            // 0x2d3768: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3778u;
            goto label_2d3778;
        }
    }
    ctx->pc = 0x2D376Cu;
    // 0x2d376c: 0xc08c050  jal         func_230140
    ctx->pc = 0x2D376Cu;
    SET_GPR_U32(ctx, 31, 0x2D3774u);
    ctx->pc = 0x2D3770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D376Cu;
    // 0x2d3770: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x2D376Cu, 0x2D3774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3774u;
label_2d3774:
    // 0x2d3774: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d3774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d3778:
    // 0x2d3778: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x2D3778u;
    SET_GPR_U32(ctx, 31, 0x2D3780u);
    ctx->pc = 0x2D377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3778u;
    // 0x2d377c: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2D3778u, 0x2D3780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3780u;
label_2d3780:
    // 0x2d3780: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3780u;
    {
        const bool branch_taken_0x2d3780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3780) {
            ctx->pc = 0x2D37A0u;
            goto label_2d37a0;
        }
    }
    ctx->pc = 0x2D3788u;
    // 0x2d3788: 0x92450031  lbu         $a1, 0x31($s2)
    ctx->pc = 0x2d3788u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x2d378c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d378cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d3790: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d3790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d3794: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2d3794u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2d3798: 0xc0a3398  jal         func_28CE60
    ctx->pc = 0x2D3798u;
    SET_GPR_U32(ctx, 31, 0x2D37A0u);
    ctx->pc = 0x2D379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3798u;
    // 0x2d379c: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE60u, 0x2D3798u, 0x2D37A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D37A0u;
label_2d37a0:
    // 0x2d37a0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D37A0u;
    SET_GPR_U32(ctx, 31, 0x2D37A8u);
    ctx->pc = 0x2D37A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D37A0u;
    // 0x2d37a4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D37A0u, 0x2D37A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D37A8u;
label_2d37a8:
    // 0x2d37a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d37a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d37ac: 0x1080005c  beqz        $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2D37ACu;
    {
        const bool branch_taken_0x2d37ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D37B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D37ACu;
        // 0x2d37b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37ac) {
            ctx->pc = 0x2D3920u;
            goto label_2d3920;
        }
    }
    ctx->pc = 0x2D37B4u;
    // 0x2d37b4: 0xc64c002c  lwc1        $f12, 0x2C($s2)
    ctx->pc = 0x2d37b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d37b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d37b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d37bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d37bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d37c0: 0x0  nop
    ctx->pc = 0x2d37c0u;
    // NOP
    // 0x2d37c4: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2d37c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d37c8: 0x0  nop
    ctx->pc = 0x2d37c8u;
    // NOP
    // 0x2d37cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D37CCu;
    {
        const bool branch_taken_0x2d37cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D37CCu;
        // 0x2d37d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37cc) {
            ctx->pc = 0x2D37D8u;
            goto label_2d37d8;
        }
    }
    ctx->pc = 0x2D37D4u;
    // 0x2d37d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d37d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d37d8:
    // 0x2d37d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d37dc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d37dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d37e0: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d37e0u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2d37e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d37e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d37e8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d37e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d37ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d37ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d37f0: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2D37F0u;
    SET_GPR_U32(ctx, 31, 0x2D37F8u);
    ctx->pc = 0x2D37F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D37F0u;
    // 0x2d37f4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D37F0u, 0x2D37F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D37F8u;
label_2d37f8:
    // 0x2d37f8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2D37F8u;
    {
        const bool branch_taken_0x2d37f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D37F8u;
        // 0x2d37fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37f8) {
            ctx->pc = 0x2D3920u;
            goto label_2d3920;
        }
    }
    ctx->pc = 0x2D3800u;
label_2d3800:
    // 0x2d3800: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d3800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d3804: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D3804u;
    {
        const bool branch_taken_0x2d3804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3804) {
            ctx->pc = 0x2D3808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3804u;
            // 0x2d3808: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D380Cu;
            goto label_2d380c;
        }
    }
    ctx->pc = 0x2D380Cu;
label_2d380c:
    // 0x2d380c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2d380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2d3810: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2d3810u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2d3814: 0x2010  mfhi        $a0
    ctx->pc = 0x2d3814u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2d3818: 0x54800038  bnel        $a0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x2D3818u;
    {
        const bool branch_taken_0x2d3818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3818) {
            ctx->pc = 0x2D381Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3818u;
            // 0x2d381c: 0x90a202d5  lbu         $v0, 0x2D5($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 725)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D38FCu;
            goto label_2d38fc;
        }
    }
    ctx->pc = 0x2D3820u;
    // 0x2d3820: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x2d3820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2d3824: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D3824u;
    {
        const bool branch_taken_0x2d3824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3824u;
        // 0x2d3828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3824) {
            ctx->pc = 0x2D3920u;
            goto label_2d3920;
        }
    }
    ctx->pc = 0x2D382Cu;
    // 0x2d382c: 0x90a202d5  lbu         $v0, 0x2D5($a1)
    ctx->pc = 0x2d382cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 725)));
    // 0x2d3830: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D3830u;
    {
        const bool branch_taken_0x2d3830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3830u;
        // 0x2d3834: 0x24a20250  addiu       $v0, $a1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3830) {
            ctx->pc = 0x2D3868u;
            goto label_2d3868;
        }
    }
    ctx->pc = 0x2D3838u;
    // 0x2d3838: 0xc4a10250  lwc1        $f1, 0x250($a1)
    ctx->pc = 0x2d3838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d383c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d383cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d3840: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d3840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d3844: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2d3844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d3848: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d3848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d384c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d384cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d3850: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d3850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3854: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2d3854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2d3858: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2d3858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d385c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2d385cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3860: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D3860u;
    {
        const bool branch_taken_0x2d3860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3860u;
        // 0x2d3864: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3860) {
            ctx->pc = 0x2D38C0u;
            goto label_2d38c0;
        }
    }
    ctx->pc = 0x2D3868u;
label_2d3868:
    // 0x2d3868: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2D3868u;
    SET_GPR_U32(ctx, 31, 0x2D3870u);
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2D3868u, 0x2D3870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3870u;
label_2d3870:
    // 0x2d3870: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x2d3870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2d3874: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d3874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3878: 0xc105896  jal         func_416258
    ctx->pc = 0x2D3878u;
    SET_GPR_U32(ctx, 31, 0x2D3880u);
    ctx->pc = 0x2D387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3878u;
    // 0x2d387c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x2D3878u, 0x2D3880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3880u;
label_2d3880:
    // 0x2d3880: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2d3880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2d3884: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2d3884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2d3888: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d3888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d388c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3890: 0xc0cd790  jal         func_335E40
    ctx->pc = 0x2D3890u;
    SET_GPR_U32(ctx, 31, 0x2D3898u);
    ctx->pc = 0x2D3894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3890u;
    // 0x2d3894: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x2D3890u, 0x2D3898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3898u;
label_2d3898:
    // 0x2d3898: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2d3898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d389c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2d389cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d38a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d38a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d38a4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d38a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d38a8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d38a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d38ac: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d38acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d38b0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2d38b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d38b4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2d38b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2d38b8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2d38b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2d38bc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2d38bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2d38c0:
    // 0x2d38c0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D38C0u;
    SET_GPR_U32(ctx, 31, 0x2D38C8u);
    ctx->pc = 0x2D38C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D38C0u;
    // 0x2d38c4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D38C0u, 0x2D38C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D38C8u;
label_2d38c8:
    // 0x2d38c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d38c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d38cc: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D38CCu;
    {
        const bool branch_taken_0x2d38cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38CCu;
        // 0x2d38d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38cc) {
            ctx->pc = 0x2D3920u;
            goto label_2d3920;
        }
    }
    ctx->pc = 0x2D38D4u;
    // 0x2d38d4: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2D38D4u;
    SET_GPR_U32(ctx, 31, 0x2D38DCu);
    ctx->pc = 0x2D38D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D38D4u;
    // 0x2d38d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2D38D4u, 0x2D38DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D38DCu;
label_2d38dc:
    // 0x2d38dc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d38dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d38e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d38e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d38e4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d38e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d38e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d38e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d38ec: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2D38ECu;
    SET_GPR_U32(ctx, 31, 0x2D38F4u);
    ctx->pc = 0x2D38F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D38ECu;
    // 0x2d38f0: 0x240703e8  addiu       $a3, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2D38ECu, 0x2D38F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D38F4u;
label_2d38f4:
    // 0x2d38f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D38F4u;
    {
        const bool branch_taken_0x2d38f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38F4u;
        // 0x2d38f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38f4) {
            ctx->pc = 0x2D3920u;
            goto label_2d3920;
        }
    }
    ctx->pc = 0x2D38FCu;
label_2d38fc:
    // 0x2d38fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D38FCu;
    {
        const bool branch_taken_0x2d38fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38FCu;
        // 0x2d3900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38fc) {
            ctx->pc = 0x2D3920u;
            goto label_2d3920;
        }
    }
    ctx->pc = 0x2D3904u;
    // 0x2d3904: 0xc08a05a  jal         func_228168
    ctx->pc = 0x2D3904u;
    SET_GPR_U32(ctx, 31, 0x2D390Cu);
    ctx->pc = 0x2D3908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3904u;
    // 0x2d3908: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x2D3904u, 0x2D390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D390Cu;
label_2d390c:
    // 0x2d390c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D390Cu;
    {
        const bool branch_taken_0x2d390c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D390Cu;
        // 0x2d3910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d390c) {
            ctx->pc = 0x2D3920u;
            goto label_2d3920;
        }
    }
    ctx->pc = 0x2D3914u;
    // 0x2d3914: 0xc08bfe2  jal         func_22FF88
    ctx->pc = 0x2D3914u;
    SET_GPR_U32(ctx, 31, 0x2D391Cu);
    ctx->pc = 0x2D3918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3914u;
    // 0x2d3918: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FF88u, 0x2D3914u, 0x2D391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D391Cu;
label_2d391c:
    // 0x2d391c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d391cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3920:
    // 0x2d3920: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2d3920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d3924: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2d3924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d3928: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2d3928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d392c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2d392cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d3930: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2d3930u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d3934: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d3934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d3938: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3938u;
        // 0x2d393c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3940u;
}
