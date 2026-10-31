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

// Function: sub_00313A00
// Address: 0x313a00 - 0x313c90
void sub_00313A00_0x313a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313A00_0x313a00");
#endif

    switch (ctx->pc) {
        case 0x313a38u: goto label_313a38;
        case 0x313a40u: goto label_313a40;
        case 0x313a54u: goto label_313a54;
        case 0x313a60u: goto label_313a60;
        case 0x313a74u: goto label_313a74;
        case 0x313a84u: goto label_313a84;
        case 0x313a98u: goto label_313a98;
        case 0x313aacu: goto label_313aac;
        case 0x313ac4u: goto label_313ac4;
        case 0x313ad8u: goto label_313ad8;
        case 0x313ae8u: goto label_313ae8;
        case 0x313afcu: goto label_313afc;
        case 0x313b0cu: goto label_313b0c;
        case 0x313b4cu: goto label_313b4c;
        case 0x313b7cu: goto label_313b7c;
        case 0x313b8cu: goto label_313b8c;
        case 0x313ba0u: goto label_313ba0;
        case 0x313bb4u: goto label_313bb4;
        case 0x313bc8u: goto label_313bc8;
        case 0x313be4u: goto label_313be4;
        case 0x313bfcu: goto label_313bfc;
        case 0x313c08u: goto label_313c08;
        case 0x313c1cu: goto label_313c1c;
        case 0x313c40u: goto label_313c40;
        case 0x313c60u: goto label_313c60;
        default: break;
    }

    ctx->pc = 0x313a00u;

    // 0x313a00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x313a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x313a04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x313a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313a08: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x313a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x313a0c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x313a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x313a10: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x313a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313a14: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x313a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x313a18: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x313a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x313a1c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x313a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x313a20: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x313a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x313a24: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x313a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x313a28: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x313a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x313a2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x313a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x313a30: 0xc0e4060  jal         func_390180
    ctx->pc = 0x313A30u;
    SET_GPR_U32(ctx, 31, 0x313A38u);
    ctx->pc = 0x313A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313A30u;
    // 0x313a34: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x313A30u, 0x313A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313A38u;
label_313a38:
    // 0x313a38: 0xc08a61a  jal         func_229868
    ctx->pc = 0x313A38u;
    SET_GPR_U32(ctx, 31, 0x313A40u);
    ctx->pc = 0x313A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313A38u;
    // 0x313a3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x313A38u, 0x313A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313A40u;
label_313a40:
    // 0x313a40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x313a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313a44: 0x52200087  beql        $s1, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x313A44u;
    {
        const bool branch_taken_0x313a44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x313a44) {
            ctx->pc = 0x313A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313A44u;
            // 0x313a48: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C64u;
            goto label_313c64;
        }
    }
    ctx->pc = 0x313A4Cu;
    // 0x313a4c: 0xc087502  jal         func_21D408
    ctx->pc = 0x313A4Cu;
    SET_GPR_U32(ctx, 31, 0x313A54u);
    ctx->pc = 0x313A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313A4Cu;
    // 0x313a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x313A4Cu, 0x313A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313A54u;
label_313a54:
    // 0x313a54: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x313a54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313a58: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x313A58u;
    SET_GPR_U32(ctx, 31, 0x313A60u);
    ctx->pc = 0x313A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313A58u;
    // 0x313a5c: 0x268401a4  addiu       $a0, $s4, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x313A58u, 0x313A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313A60u;
label_313a60:
    // 0x313a60: 0x54400080  bnel        $v0, $zero, . + 4 + (0x80 << 2)
    ctx->pc = 0x313A60u;
    {
        const bool branch_taken_0x313a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313a60) {
            ctx->pc = 0x313A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313A60u;
            // 0x313a64: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C64u;
            goto label_313c64;
        }
    }
    ctx->pc = 0x313A68u;
    // 0x313a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x313a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313a6c: 0xc08a096  jal         func_228258
    ctx->pc = 0x313A6Cu;
    SET_GPR_U32(ctx, 31, 0x313A74u);
    ctx->pc = 0x313A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313A6Cu;
    // 0x313a70: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x313A6Cu, 0x313A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313A74u;
label_313a74:
    // 0x313a74: 0x5056007b  beql        $v0, $s6, . + 4 + (0x7B << 2)
    ctx->pc = 0x313A74u;
    {
        const bool branch_taken_0x313a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x313a74) {
            ctx->pc = 0x313A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313A74u;
            // 0x313a78: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C64u;
            goto label_313c64;
        }
    }
    ctx->pc = 0x313A7Cu;
    // 0x313a7c: 0xc08a08a  jal         func_228228
    ctx->pc = 0x313A7Cu;
    SET_GPR_U32(ctx, 31, 0x313A84u);
    ctx->pc = 0x313A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313A7Cu;
    // 0x313a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x313A7Cu, 0x313A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313A84u;
label_313a84:
    // 0x313a84: 0x10560076  beq         $v0, $s6, . + 4 + (0x76 << 2)
    ctx->pc = 0x313A84u;
    {
        const bool branch_taken_0x313a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x313A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A84u;
        // 0x313a88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a84) {
            ctx->pc = 0x313C60u;
            goto label_313c60;
        }
    }
    ctx->pc = 0x313A8Cu;
    // 0x313a8c: 0x8e220178  lw          $v0, 0x178($s1)
    ctx->pc = 0x313a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x313a90: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x313A90u;
    SET_GPR_U32(ctx, 31, 0x313A98u);
    ctx->pc = 0x313A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313A90u;
    // 0x313a94: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x313A90u, 0x313A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313A98u;
label_313a98:
    // 0x313a98: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x313a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x313a9c: 0x50560071  beql        $v0, $s6, . + 4 + (0x71 << 2)
    ctx->pc = 0x313A9Cu;
    {
        const bool branch_taken_0x313a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x313a9c) {
            ctx->pc = 0x313AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313A9Cu;
            // 0x313aa0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C64u;
            goto label_313c64;
        }
    }
    ctx->pc = 0x313AA4u;
    // 0x313aa4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x313AA4u;
    SET_GPR_U32(ctx, 31, 0x313AACu);
    ctx->pc = 0x313AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313AA4u;
    // 0x313aa8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x313AA4u, 0x313AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313AACu;
label_313aac:
    // 0x313aac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x313aacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ab0: 0x5240006c  beql        $s2, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x313AB0u;
    {
        const bool branch_taken_0x313ab0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x313ab0) {
            ctx->pc = 0x313AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313AB0u;
            // 0x313ab4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C64u;
            goto label_313c64;
        }
    }
    ctx->pc = 0x313AB8u;
    // 0x313ab8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x313ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x313abc: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x313ABCu;
    SET_GPR_U32(ctx, 31, 0x313AC4u);
    ctx->pc = 0x313AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313ABCu;
    // 0x313ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x313ABCu, 0x313AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313AC4u;
label_313ac4:
    // 0x313ac4: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x313ac4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x313ac8: 0x50600066  beql        $v1, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x313AC8u;
    {
        const bool branch_taken_0x313ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x313ac8) {
            ctx->pc = 0x313ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313AC8u;
            // 0x313acc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C64u;
            goto label_313c64;
        }
    }
    ctx->pc = 0x313AD0u;
    // 0x313ad0: 0xc087502  jal         func_21D408
    ctx->pc = 0x313AD0u;
    SET_GPR_U32(ctx, 31, 0x313AD8u);
    ctx->pc = 0x313AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313AD0u;
    // 0x313ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x313AD0u, 0x313AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313AD8u;
label_313ad8:
    // 0x313ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x313ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313adc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x313adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ae0: 0xc0a44ac  jal         func_2912B0
    ctx->pc = 0x313AE0u;
    SET_GPR_U32(ctx, 31, 0x313AE8u);
    ctx->pc = 0x313AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313AE0u;
    // 0x313ae4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2912B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2912B0u, 0x313AE0u, 0x313AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313AE8u;
label_313ae8:
    // 0x313ae8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x313ae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313aec: 0x5260005d  beql        $s3, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x313AECu;
    {
        const bool branch_taken_0x313aec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x313aec) {
            ctx->pc = 0x313AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313AECu;
            // 0x313af0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C64u;
            goto label_313c64;
        }
    }
    ctx->pc = 0x313AF4u;
    // 0x313af4: 0xc08a08a  jal         func_228228
    ctx->pc = 0x313AF4u;
    SET_GPR_U32(ctx, 31, 0x313AFCu);
    ctx->pc = 0x313AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313AF4u;
    // 0x313af8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x313AF4u, 0x313AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313AFCu;
label_313afc:
    // 0x313afc: 0x10560006  beq         $v0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x313AFCu;
    {
        const bool branch_taken_0x313afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x313B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313AFCu;
        // 0x313b00: 0x26700090  addiu       $s0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313afc) {
            ctx->pc = 0x313B18u;
            goto label_313b18;
        }
    }
    ctx->pc = 0x313B04u;
    // 0x313b04: 0xc08a096  jal         func_228258
    ctx->pc = 0x313B04u;
    SET_GPR_U32(ctx, 31, 0x313B0Cu);
    ctx->pc = 0x313B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313B04u;
    // 0x313b08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x313B04u, 0x313B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313B0Cu;
label_313b0c:
    // 0x313b0c: 0x14560055  bne         $v0, $s6, . + 4 + (0x55 << 2)
    ctx->pc = 0x313B0Cu;
    {
        const bool branch_taken_0x313b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x313B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B0Cu;
        // 0x313b10: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b0c) {
            ctx->pc = 0x313C64u;
            goto label_313c64;
        }
    }
    ctx->pc = 0x313B14u;
    // 0x313b14: 0x26700090  addiu       $s0, $s3, 0x90
    ctx->pc = 0x313b14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_313b18:
    // 0x313b18: 0xc6940140  lwc1        $f20, 0x140($s4)
    ctx->pc = 0x313b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x313b1c: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x313b1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x313b20: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x313b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x313b24: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x313b24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x313b28: 0x24574b00  addiu       $s7, $v0, 0x4B00
    ctx->pc = 0x313b28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x313b2c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x313b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x313b30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x313b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313b34: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x313b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x313b38: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x313b38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x313b3c: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x313b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x313b40: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x313b40u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x313b44: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x313B44u;
    SET_GPR_U32(ctx, 31, 0x313B4Cu);
    ctx->pc = 0x313B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313B44u;
    // 0x313b48: 0xb72821  addu        $a1, $a1, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x313B44u, 0x313B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313B4Cu;
label_313b4c:
    // 0x313b4c: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x313b4cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x313b50: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x313b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313b54: 0x0  nop
    ctx->pc = 0x313b54u;
    // NOP
    // 0x313b58: 0x45030042  bc1tl       . + 4 + (0x42 << 2)
    ctx->pc = 0x313B58u;
    {
        const bool branch_taken_0x313b58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x313b58) {
            ctx->pc = 0x313B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313B58u;
            // 0x313b5c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C64u;
            goto label_313c64;
        }
    }
    ctx->pc = 0x313B60u;
    // 0x313b60: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x313b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x313b64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x313b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x313b68: 0x26240284  addiu       $a0, $s1, 0x284
    ctx->pc = 0x313b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    // 0x313b6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x313b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b70: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x313b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x313b74: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x313B74u;
    SET_GPR_U32(ctx, 31, 0x313B7Cu);
    ctx->pc = 0x313B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313B74u;
    // 0x313b78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x313B74u, 0x313B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313B7Cu;
label_313b7c:
    // 0x313b7c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x313b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x313b80: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x313b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x313b84: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x313B84u;
    SET_GPR_U32(ctx, 31, 0x313B8Cu);
    ctx->pc = 0x313B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313B84u;
    // 0x313b88: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x313B84u, 0x313B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313B8Cu;
label_313b8c:
    // 0x313b8c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x313b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x313b90: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x313B90u;
    {
        const bool branch_taken_0x313b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313b90) {
            ctx->pc = 0x313B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313B90u;
            // 0x313b94: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C64u;
            goto label_313c64;
        }
    }
    ctx->pc = 0x313B98u;
    // 0x313b98: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x313B98u;
    SET_GPR_U32(ctx, 31, 0x313BA0u);
    ctx->pc = 0x313B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313B98u;
    // 0x313b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x313B98u, 0x313BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313BA0u;
label_313ba0:
    // 0x313ba0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x313ba0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ba4: 0x56b6002f  bnel        $s5, $s6, . + 4 + (0x2F << 2)
    ctx->pc = 0x313BA4u;
    {
        const bool branch_taken_0x313ba4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        if (branch_taken_0x313ba4) {
            ctx->pc = 0x313BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313BA4u;
            // 0x313ba8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C64u;
            goto label_313c64;
        }
    }
    ctx->pc = 0x313BACu;
    // 0x313bac: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x313BACu;
    SET_GPR_U32(ctx, 31, 0x313BB4u);
    ctx->pc = 0x313BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313BACu;
    // 0x313bb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x313BACu, 0x313BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313BB4u;
label_313bb4:
    // 0x313bb4: 0x8283002e  lb          $v1, 0x2E($s4)
    ctx->pc = 0x313bb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 46)));
    // 0x313bb8: 0x5c60002a  bgtzl       $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x313BB8u;
    {
        const bool branch_taken_0x313bb8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x313bb8) {
            ctx->pc = 0x313BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313BB8u;
            // 0x313bbc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C64u;
            goto label_313c64;
        }
    }
    ctx->pc = 0x313BC0u;
    // 0x313bc0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x313BC0u;
    SET_GPR_U32(ctx, 31, 0x313BC8u);
    ctx->pc = 0x313BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313BC0u;
    // 0x313bc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x313BC0u, 0x313BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313BC8u;
label_313bc8:
    // 0x313bc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x313bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313bcc: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x313BCCu;
    {
        const bool branch_taken_0x313bcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x313BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BCCu;
        // 0x313bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313bcc) {
            ctx->pc = 0x313BFCu;
            goto label_313bfc;
        }
    }
    ctx->pc = 0x313BD4u;
    // 0x313bd4: 0x86100002  lh          $s0, 0x2($s0)
    ctx->pc = 0x313bd4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x313bd8: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x313bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x313bdc: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x313BDCu;
    SET_GPR_U32(ctx, 31, 0x313BE4u);
    ctx->pc = 0x313BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313BDCu;
    // 0x313be0: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x313BDCu, 0x313BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313BE4u;
label_313be4:
    // 0x313be4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313be8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x313be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313bec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x313becu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x313bf0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x313bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313bf4: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x313BF4u;
    SET_GPR_U32(ctx, 31, 0x313BFCu);
    ctx->pc = 0x313BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313BF4u;
    // 0x313bf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x313BF4u, 0x313BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313BFCu;
label_313bfc:
    // 0x313bfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x313bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313c00: 0xc089f98  jal         func_227E60
    ctx->pc = 0x313C00u;
    SET_GPR_U32(ctx, 31, 0x313C08u);
    ctx->pc = 0x313C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313C00u;
    // 0x313c04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x313C00u, 0x313C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313C08u;
label_313c08:
    // 0x313c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313c0c: 0x16150005  bne         $s0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x313C0Cu;
    {
        const bool branch_taken_0x313c0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x313C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C0Cu;
        // 0x313c10: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c0c) {
            ctx->pc = 0x313C24u;
            goto label_313c24;
        }
    }
    ctx->pc = 0x313C14u;
    // 0x313c14: 0xc089f66  jal         func_227D98
    ctx->pc = 0x313C14u;
    SET_GPR_U32(ctx, 31, 0x313C1Cu);
    ctx->pc = 0x313C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313C14u;
    // 0x313c18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x313C14u, 0x313C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313C1Cu;
label_313c1c:
    // 0x313c1c: 0x202880a  movz        $s1, $s0, $v0
    ctx->pc = 0x313c1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
    // 0x313c20: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x313c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_313c24:
    // 0x313c24: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x313c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x313c28: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x313c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x313c2c: 0x240200c2  addiu       $v0, $zero, 0xC2
    ctx->pc = 0x313c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x313c30: 0x51800b  movn        $s0, $v0, $s1
    ctx->pc = 0x313c30u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x313c34: 0x71900b  movn        $s2, $v1, $s1
    ctx->pc = 0x313c34u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x313c38: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x313C38u;
    SET_GPR_U32(ctx, 31, 0x313C40u);
    ctx->pc = 0x313C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313C38u;
    // 0x313c3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x313C38u, 0x313C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313C40u;
label_313c40:
    // 0x313c40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x313C40u;
    {
        const bool branch_taken_0x313c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C40u;
        // 0x313c44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c40) {
            ctx->pc = 0x313C60u;
            goto label_313c60;
        }
    }
    ctx->pc = 0x313C48u;
    // 0x313c48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x313c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313c4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x313c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313c50: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x313c50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313c54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x313c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313c58: 0xc0bec3c  jal         func_2FB0F0
    ctx->pc = 0x313C58u;
    SET_GPR_U32(ctx, 31, 0x313C60u);
    ctx->pc = 0x313C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313C58u;
    // 0x313c5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x313C58u, 0x313C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313C60u;
label_313c60:
    // 0x313c60: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x313c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_313c64:
    // 0x313c64: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x313c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x313c68: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x313c68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x313c6c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x313c6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x313c70: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x313c70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x313c74: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x313c74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x313c78: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x313c78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313c7c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x313c7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313c80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x313c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313c84: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x313c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x313c88: 0x3e00008  jr          $ra
    ctx->pc = 0x313C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C88u;
        // 0x313c8c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313C90u;
}
