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

// Function: sub_0031D358
// Address: 0x31d358 - 0x31d460
void sub_0031D358_0x31d358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D358_0x31d358");
#endif

    switch (ctx->pc) {
        case 0x31d398u: goto label_31d398;
        case 0x31d3bcu: goto label_31d3bc;
        case 0x31d3f8u: goto label_31d3f8;
        case 0x31d40cu: goto label_31d40c;
        case 0x31d434u: goto label_31d434;
        case 0x31d448u: goto label_31d448;
        default: break;
    }

    ctx->pc = 0x31d358u;

    // 0x31d358: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31d358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31d35c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31d360: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31d360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31d364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31d364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31d36c: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x31d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x31d370: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x31D370u;
    {
        const bool branch_taken_0x31d370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D370u;
        // 0x31d374: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d370) {
            ctx->pc = 0x31D44Cu;
            goto label_31d44c;
        }
    }
    ctx->pc = 0x31D378u;
    // 0x31d378: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x31d378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x31d37c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31D37Cu;
    {
        const bool branch_taken_0x31d37c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D37Cu;
        // 0x31d380: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d37c) {
            ctx->pc = 0x31D3A4u;
            goto label_31d3a4;
        }
    }
    ctx->pc = 0x31D384u;
    // 0x31d384: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31d388: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x31d388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31d38c: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x31d38cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x31d390: 0xc08823c  jal         func_2208F0
    ctx->pc = 0x31D390u;
    SET_GPR_U32(ctx, 31, 0x31D398u);
    ctx->pc = 0x31D394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D390u;
    // 0x31d394: 0x9045060c  lbu         $a1, 0x60C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208F0u, 0x31D390u, 0x31D398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D398u;
label_31d398:
    // 0x31d398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d39c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31D39Cu;
    {
        const bool branch_taken_0x31d39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D39Cu;
        // 0x31d3a0: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d39c) {
            ctx->pc = 0x31D448u;
            goto label_31d448;
        }
    }
    ctx->pc = 0x31D3A4u;
label_31d3a4:
    // 0x31d3a4: 0x1470001c  bne         $v1, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31D3A4u;
    {
        const bool branch_taken_0x31d3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x31D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3A4u;
        // 0x31d3a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3a4) {
            ctx->pc = 0x31D418u;
            goto label_31d418;
        }
    }
    ctx->pc = 0x31D3ACu;
    // 0x31d3ac: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x31d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x31d3b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d3b4: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x31D3B4u;
    SET_GPR_U32(ctx, 31, 0x31D3BCu);
    ctx->pc = 0x31D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D3B4u;
    // 0x31d3b8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x31D3B4u, 0x31D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D3BCu;
label_31d3bc:
    // 0x31d3bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31d3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31d3c0: 0x10500021  beq         $v0, $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x31D3C0u;
    {
        const bool branch_taken_0x31d3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x31D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3C0u;
        // 0x31d3c4: 0x2406026d  addiu       $a2, $zero, 0x26D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3c0) {
            ctx->pc = 0x31D448u;
            goto label_31d448;
        }
    }
    ctx->pc = 0x31D3C8u;
    // 0x31d3c8: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x31d3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x31d3cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x31d3d0: 0x8ca203b4  lw          $v0, 0x3B4($a1)
    ctx->pc = 0x31d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 948)));
    // 0x31d3d4: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x31d3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x31d3d8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x31d3d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31d3dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31d3e0: 0x8c870214  lw          $a3, 0x214($a0)
    ctx->pc = 0x31d3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x31d3e4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x31d3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d3e8: 0x9070060c  lbu         $s0, 0x60C($v1)
    ctx->pc = 0x31d3e8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1548)));
    // 0x31d3ec: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x31d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x31d3f0: 0xc05a582  jal         func_169608
    ctx->pc = 0x31D3F0u;
    SET_GPR_U32(ctx, 31, 0x31D3F8u);
    ctx->pc = 0x31D3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D3F0u;
    // 0x31d3f4: 0x90450040  lbu         $a1, 0x40($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169608u, 0x31D3F0u, 0x31D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D3F8u;
label_31d3f8:
    // 0x31d3f8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x31d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x31d3fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31d3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d400: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x31d400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x31d404: 0xc08823c  jal         func_2208F0
    ctx->pc = 0x31D404u;
    SET_GPR_U32(ctx, 31, 0x31D40Cu);
    ctx->pc = 0x31D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D404u;
    // 0x31d408: 0x2407004e  addiu       $a3, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208F0u, 0x31D404u, 0x31D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D40Cu;
label_31d40c:
    // 0x31d40c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31d410: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31D410u;
    {
        const bool branch_taken_0x31d410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D410u;
        // 0x31d414: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d410) {
            ctx->pc = 0x31D448u;
            goto label_31d448;
        }
    }
    ctx->pc = 0x31D418u;
label_31d418:
    // 0x31d418: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31D418u;
    {
        const bool branch_taken_0x31d418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31d418) {
            ctx->pc = 0x31D41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D418u;
            // 0x31d41c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D44Cu;
            goto label_31d44c;
        }
    }
    ctx->pc = 0x31D420u;
    // 0x31d420: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x31d420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x31d424: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x31d424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x31d428: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x31d428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x31d42c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x31D42Cu;
    SET_GPR_U32(ctx, 31, 0x31D434u);
    ctx->pc = 0x31D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D42Cu;
    // 0x31d430: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x31D42Cu, 0x31D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D434u;
label_31d434:
    // 0x31d434: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31d434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31d438: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D438u;
    {
        const bool branch_taken_0x31d438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x31D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D438u;
        // 0x31d43c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d438) {
            ctx->pc = 0x31D448u;
            goto label_31d448;
        }
    }
    ctx->pc = 0x31D440u;
    // 0x31d440: 0xc0c743a  jal         func_31D0E8
    ctx->pc = 0x31D440u;
    SET_GPR_U32(ctx, 31, 0x31D448u);
    ctx->pc = 0x31D444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D440u;
    // 0x31d444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D0E8u, 0x31D440u, 0x31D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D448u;
label_31d448:
    // 0x31d448: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31d448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31d44c:
    // 0x31d44c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31d44cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31d450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d454: 0x3e00008  jr          $ra
    ctx->pc = 0x31D454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D454u;
        // 0x31d458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D45Cu;
    // 0x31d45c: 0x0  nop
    ctx->pc = 0x31d45cu;
    // NOP
    ctx->pc = 0x31d460u;
}
