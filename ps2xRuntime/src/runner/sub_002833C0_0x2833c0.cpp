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

// Function: sub_002833C0
// Address: 0x2833c0 - 0x283a30
void sub_002833C0_0x2833c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002833C0_0x2833c0");
#endif

    switch (ctx->pc) {
        case 0x283424u: goto label_283424;
        case 0x283434u: goto label_283434;
        case 0x283440u: goto label_283440;
        case 0x28344cu: goto label_28344c;
        case 0x283474u: goto label_283474;
        case 0x283480u: goto label_283480;
        case 0x283490u: goto label_283490;
        case 0x28350cu: goto label_28350c;
        case 0x283624u: goto label_283624;
        case 0x283740u: goto label_283740;
        case 0x28375cu: goto label_28375c;
        case 0x28376cu: goto label_28376c;
        case 0x2838b0u: goto label_2838b0;
        case 0x283924u: goto label_283924;
        case 0x28393cu: goto label_28393c;
        default: break;
    }

    ctx->pc = 0x2833c0u;

    // 0x2833c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2833c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2833c4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2833c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2833c8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2833c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2833cc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2833ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2833d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2833d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833d4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2833d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2833d8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2833d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2833dc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2833dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2833e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2833e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2833e4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2833e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2833e8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2833e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2833ec: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2833ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2833f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2833f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2833f4: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x2833f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FDEB8u));
    // 0x2833f8: 0x8c6401e8  lw          $a0, 0x1E8($v1)
    ctx->pc = 0x2833f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x2833fc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2833FCu;
    {
        const bool branch_taken_0x2833fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x283400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833FCu;
        // 0x283400: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833fc) {
            ctx->pc = 0x283418u;
            goto label_283418;
        }
    }
    ctx->pc = 0x283404u;
    // 0x283404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283408: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x283408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
    // 0x28340c: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x28340cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x283410: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x283410u;
    {
        const bool branch_taken_0x283410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283410u;
        // 0x283414: 0xae2505ac  sw          $a1, 0x5AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1452), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283410) {
            ctx->pc = 0x2839FCu;
            goto label_2839fc;
        }
    }
    ctx->pc = 0x283418u;
label_283418:
    // 0x283418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28341c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x28341Cu;
    SET_GPR_U32(ctx, 31, 0x283424u);
    ctx->pc = 0x283420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28341Cu;
    // 0x283420: 0x8e3200d4  lw          $s2, 0xD4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x28341Cu, 0x283424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283424u;
label_283424:
    // 0x283424: 0x263000c4  addiu       $s0, $s1, 0xC4
    ctx->pc = 0x283424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x283428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28342c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x28342Cu;
    SET_GPR_U32(ctx, 31, 0x283434u);
    ctx->pc = 0x283430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28342Cu;
    // 0x283430: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28342Cu, 0x283434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283434u;
label_283434:
    // 0x283434: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x283434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283438: 0xc0a0ada  jal         func_282B68
    ctx->pc = 0x283438u;
    SET_GPR_U32(ctx, 31, 0x283440u);
    ctx->pc = 0x28343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283438u;
    // 0x28343c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282B68u, 0x283438u, 0x283440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283440u;
label_283440:
    // 0x283440: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x283440u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283444: 0xc0e409a  jal         func_390268
    ctx->pc = 0x283444u;
    SET_GPR_U32(ctx, 31, 0x28344Cu);
    ctx->pc = 0x283448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283444u;
    // 0x283448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x283444u, 0x28344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28344Cu;
label_28344c:
    // 0x28344c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x28344cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283450: 0x12c0016a  beqz        $s6, . + 4 + (0x16A << 2)
    ctx->pc = 0x283450u;
    {
        const bool branch_taken_0x283450 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x283454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283450u;
        // 0x283454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283450) {
            ctx->pc = 0x2839FCu;
            goto label_2839fc;
        }
    }
    ctx->pc = 0x283458u;
    // 0x283458: 0x82c201b0  lb          $v0, 0x1B0($s6)
    ctx->pc = 0x283458u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 432)));
    // 0x28345c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28345cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x283460: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x283460u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x283464: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x283464u;
    {
        const bool branch_taken_0x283464 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x283468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283464u;
        // 0x283468: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283464) {
            ctx->pc = 0x283484u;
            goto label_283484;
        }
    }
    ctx->pc = 0x28346Cu;
    // 0x28346c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x28346Cu;
    SET_GPR_U32(ctx, 31, 0x283474u);
    ctx->pc = 0x283470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28346Cu;
    // 0x283470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28346Cu, 0x283474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283474u;
label_283474:
    // 0x283474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x283474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283478: 0xc0a0c1e  jal         func_283078
    ctx->pc = 0x283478u;
    SET_GPR_U32(ctx, 31, 0x283480u);
    ctx->pc = 0x28347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283478u;
    // 0x28347c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283078u, 0x283478u, 0x283480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283480u;
label_283480:
    // 0x283480: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x283480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_283484:
    // 0x283484: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x283484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283488: 0xc051ff4  jal         func_147FD0
    ctx->pc = 0x283488u;
    SET_GPR_U32(ctx, 31, 0x283490u);
    ctx->pc = 0x28348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283488u;
    // 0x28348c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147FD0u, 0x283488u, 0x283490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283490u;
label_283490:
    // 0x283490: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x283490u;
    {
        const bool branch_taken_0x283490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283490u;
        // 0x283494: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283490) {
            ctx->pc = 0x28349Cu;
            goto label_28349c;
        }
    }
    ctx->pc = 0x283498u;
    // 0x283498: 0xa2420128  sb          $v0, 0x128($s2)
    ctx->pc = 0x283498u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 296), (uint8_t)GPR_U32(ctx, 2));
label_28349c:
    // 0x28349c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x28349cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2834a0: 0x8e2405ac  lw          $a0, 0x5AC($s1)
    ctx->pc = 0x2834a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1452)));
    // 0x2834a4: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2834a4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x2834a8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2834a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2834ac: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2834acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2834b0: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2834b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2834b4: 0xae2305ac  sw          $v1, 0x5AC($s1)
    ctx->pc = 0x2834b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1452), GPR_U32(ctx, 3));
    // 0x2834b8: 0x92420128  lbu         $v0, 0x128($s2)
    ctx->pc = 0x2834b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x2834bc: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2834BCu;
    {
        const bool branch_taken_0x2834bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2834C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834BCu;
        // 0x2834c0: 0x64b823  subu        $s7, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834bc) {
            ctx->pc = 0x2834E8u;
            goto label_2834e8;
        }
    }
    ctx->pc = 0x2834C4u;
    // 0x2834c4: 0x56a00009  bnel        $s5, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2834C4u;
    {
        const bool branch_taken_0x2834c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2834c4) {
            ctx->pc = 0x2834C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2834C4u;
            // 0x2834c8: 0x8e220380  lw          $v0, 0x380($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2834ECu;
            goto label_2834ec;
        }
    }
    ctx->pc = 0x2834CCu;
    // 0x2834cc: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2834ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2834d0: 0x8e420134  lw          $v0, 0x134($s2)
    ctx->pc = 0x2834d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
    // 0x2834d4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2834d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2834d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2834D8u;
    {
        const bool branch_taken_0x2834d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2834d8) {
            ctx->pc = 0x2834DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2834D8u;
            // 0x2834dc: 0x8e220380  lw          $v0, 0x380($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2834ECu;
            goto label_2834ec;
        }
    }
    ctx->pc = 0x2834E0u;
    // 0x2834e0: 0xa2460128  sb          $a2, 0x128($s2)
    ctx->pc = 0x2834e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 296), (uint8_t)GPR_U32(ctx, 6));
    // 0x2834e4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2834e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2834e8:
    // 0x2834e8: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x2834e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_2834ec:
    // 0x2834ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2834ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2834f0: 0x24700840  addiu       $s0, $v1, 0x840
    ctx->pc = 0x2834f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    // 0x2834f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2834f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2834f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2834f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2834fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2834fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x283500: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x283500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x283504: 0xc070192  jal         func_1C0648
    ctx->pc = 0x283504u;
    SET_GPR_U32(ctx, 31, 0x28350Cu);
    ctx->pc = 0x283508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283504u;
    // 0x283508: 0x24843480  addiu       $a0, $a0, 0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0648u, 0x283504u, 0x28350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28350Cu;
label_28350c:
    // 0x28350c: 0x12a00047  beqz        $s5, . + 4 + (0x47 << 2)
    ctx->pc = 0x28350Cu;
    {
        const bool branch_taken_0x28350c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x283510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28350Cu;
        // 0x283510: 0x8fc2b734  lw          $v0, -0x48CC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28350c) {
            ctx->pc = 0x28362Cu;
            goto label_28362c;
        }
    }
    ctx->pc = 0x283514u;
    // 0x283514: 0x8ec200d4  lw          $v0, 0xD4($s6)
    ctx->pc = 0x283514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 212)));
    // 0x283518: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x283518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x28351c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28351Cu;
    {
        const bool branch_taken_0x28351c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28351Cu;
        // 0x283520: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28351c) {
            ctx->pc = 0x283538u;
            goto label_283538;
        }
    }
    ctx->pc = 0x283524u;
    // 0x283524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283528: 0x0  nop
    ctx->pc = 0x283528u;
    // NOP
    // 0x28352c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28352cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283530: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x283530u;
    {
        const bool branch_taken_0x283530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283530u;
        // 0x283534: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283530) {
            ctx->pc = 0x28355Cu;
            goto label_28355c;
        }
    }
    ctx->pc = 0x283538u;
label_283538:
    // 0x283538: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x283538u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x28353c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283540: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x283540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283548: 0x0  nop
    ctx->pc = 0x283548u;
    // NOP
    // 0x28354c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28354cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283550: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x283550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x283554: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x283554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283558: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x283558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_28355c:
    // 0x28355c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28355Cu;
    {
        const bool branch_taken_0x28355c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28355Cu;
        // 0x283560: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28355c) {
            ctx->pc = 0x283578u;
            goto label_283578;
        }
    }
    ctx->pc = 0x283564u;
    // 0x283564: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x283564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x283568: 0x0  nop
    ctx->pc = 0x283568u;
    // NOP
    // 0x28356c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x28356cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x283570: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283570u;
    {
        const bool branch_taken_0x283570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283570u;
        // 0x283574: 0x8e42012c  lw          $v0, 0x12C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283570) {
            ctx->pc = 0x283594u;
            goto label_283594;
        }
    }
    ctx->pc = 0x283578u;
label_283578:
    // 0x283578: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28357c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28357cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283580: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x283580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x283584: 0x0  nop
    ctx->pc = 0x283584u;
    // NOP
    // 0x283588: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x283588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x28358c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x28358cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x283590: 0x8e42012c  lw          $v0, 0x12C($s2)
    ctx->pc = 0x283590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
label_283594:
    // 0x283594: 0x0  nop
    ctx->pc = 0x283594u;
    // NOP
    // 0x283598: 0x0  nop
    ctx->pc = 0x283598u;
    // NOP
    // 0x28359c: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x28359cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x2835a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2835A0u;
    {
        const bool branch_taken_0x2835a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2835A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835A0u;
        // 0x2835a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835a0) {
            ctx->pc = 0x2835BCu;
            goto label_2835bc;
        }
    }
    ctx->pc = 0x2835A8u;
    // 0x2835a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2835a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2835ac: 0x0  nop
    ctx->pc = 0x2835acu;
    // NOP
    // 0x2835b0: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2835b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2835b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2835B4u;
    {
        const bool branch_taken_0x2835b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835B4u;
        // 0x2835b8: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835b4) {
            ctx->pc = 0x2835D8u;
            goto label_2835d8;
        }
    }
    ctx->pc = 0x2835BCu;
label_2835bc:
    // 0x2835bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2835bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2835c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2835c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2835c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2835c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2835c8: 0x0  nop
    ctx->pc = 0x2835c8u;
    // NOP
    // 0x2835cc: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2835ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2835d0: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x2835d0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x2835d4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2835d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2835d8:
    // 0x2835d8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2835D8u;
    {
        const bool branch_taken_0x2835d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2835DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835D8u;
        // 0x2835dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835d8) {
            ctx->pc = 0x2835F4u;
            goto label_2835f4;
        }
    }
    ctx->pc = 0x2835E0u;
    // 0x2835e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2835e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2835e4: 0x0  nop
    ctx->pc = 0x2835e4u;
    // NOP
    // 0x2835e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2835e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2835ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2835ECu;
    {
        const bool branch_taken_0x2835ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2835ec) {
            ctx->pc = 0x28360Cu;
            goto label_28360c;
        }
    }
    ctx->pc = 0x2835F4u;
label_2835f4:
    // 0x2835f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2835f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2835f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2835f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2835fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2835fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283600: 0x0  nop
    ctx->pc = 0x283600u;
    // NOP
    // 0x283604: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283608: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x283608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28360c:
    // 0x28360c: 0x0  nop
    ctx->pc = 0x28360cu;
    // NOP
    // 0x283610: 0x0  nop
    ctx->pc = 0x283610u;
    // NOP
    // 0x283614: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x283614u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[0]); }
    // 0x283618: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x283618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x28361c: 0xc06ca2e  jal         func_1B28B8
    ctx->pc = 0x28361Cu;
    SET_GPR_U32(ctx, 31, 0x283624u);
    ctx->pc = 0x283620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28361Cu;
    // 0x283620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28B8u, 0x28361Cu, 0x283624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283624u;
label_283624:
    // 0x283624: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x283624u;
    {
        const bool branch_taken_0x283624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283624u;
        // 0x283628: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283624) {
            ctx->pc = 0x283744u;
            goto label_283744;
        }
    }
    ctx->pc = 0x28362Cu;
label_28362c:
    // 0x28362c: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x28362cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x283630: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x283630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x283634: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x283634u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x283638: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283638u;
    {
        const bool branch_taken_0x283638 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283638u;
        // 0x28363c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283638) {
            ctx->pc = 0x283654u;
            goto label_283654;
        }
    }
    ctx->pc = 0x283640u;
    // 0x283640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283644: 0x0  nop
    ctx->pc = 0x283644u;
    // NOP
    // 0x283648: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28364c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28364Cu;
    {
        const bool branch_taken_0x28364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28364Cu;
        // 0x283650: 0x8e420134  lw          $v0, 0x134($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28364c) {
            ctx->pc = 0x283674u;
            goto label_283674;
        }
    }
    ctx->pc = 0x283654u;
label_283654:
    // 0x283654: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x283654u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x283658: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28365c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28365cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283664: 0x0  nop
    ctx->pc = 0x283664u;
    // NOP
    // 0x283668: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28366c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28366cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x283670: 0x8e420134  lw          $v0, 0x134($s2)
    ctx->pc = 0x283670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
label_283674:
    // 0x283674: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x283674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x283678: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283678u;
    {
        const bool branch_taken_0x283678 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283678u;
        // 0x28367c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283678) {
            ctx->pc = 0x283694u;
            goto label_283694;
        }
    }
    ctx->pc = 0x283680u;
    // 0x283680: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x283680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x283684: 0x0  nop
    ctx->pc = 0x283684u;
    // NOP
    // 0x283688: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x283688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x28368c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28368Cu;
    {
        const bool branch_taken_0x28368c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28368Cu;
        // 0x283690: 0x8e42012c  lw          $v0, 0x12C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28368c) {
            ctx->pc = 0x2836B0u;
            goto label_2836b0;
        }
    }
    ctx->pc = 0x283694u;
label_283694:
    // 0x283694: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283698: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x283698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28369c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28369cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2836a0: 0x0  nop
    ctx->pc = 0x2836a0u;
    // NOP
    // 0x2836a4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2836a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2836a8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2836a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2836ac: 0x8e42012c  lw          $v0, 0x12C($s2)
    ctx->pc = 0x2836acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
label_2836b0:
    // 0x2836b0: 0x0  nop
    ctx->pc = 0x2836b0u;
    // NOP
    // 0x2836b4: 0x0  nop
    ctx->pc = 0x2836b4u;
    // NOP
    // 0x2836b8: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2836b8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x2836bc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2836BCu;
    {
        const bool branch_taken_0x2836bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2836C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836BCu;
        // 0x2836c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836bc) {
            ctx->pc = 0x2836D8u;
            goto label_2836d8;
        }
    }
    ctx->pc = 0x2836C4u;
    // 0x2836c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2836c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2836c8: 0x0  nop
    ctx->pc = 0x2836c8u;
    // NOP
    // 0x2836cc: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2836ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2836d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2836D0u;
    {
        const bool branch_taken_0x2836d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836D0u;
        // 0x2836d4: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836d0) {
            ctx->pc = 0x2836F4u;
            goto label_2836f4;
        }
    }
    ctx->pc = 0x2836D8u;
label_2836d8:
    // 0x2836d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2836d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2836dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2836dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2836e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2836e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2836e4: 0x0  nop
    ctx->pc = 0x2836e4u;
    // NOP
    // 0x2836e8: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2836e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2836ec: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x2836ecu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x2836f0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2836f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2836f4:
    // 0x2836f4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2836F4u;
    {
        const bool branch_taken_0x2836f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2836F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836F4u;
        // 0x2836f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836f4) {
            ctx->pc = 0x283710u;
            goto label_283710;
        }
    }
    ctx->pc = 0x2836FCu;
    // 0x2836fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2836fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283700: 0x0  nop
    ctx->pc = 0x283700u;
    // NOP
    // 0x283704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283708: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x283708u;
    {
        const bool branch_taken_0x283708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283708) {
            ctx->pc = 0x283728u;
            goto label_283728;
        }
    }
    ctx->pc = 0x283710u;
label_283710:
    // 0x283710: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283714: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x283714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28371c: 0x0  nop
    ctx->pc = 0x28371cu;
    // NOP
    // 0x283720: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283724: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x283724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_283728:
    // 0x283728: 0x0  nop
    ctx->pc = 0x283728u;
    // NOP
    // 0x28372c: 0x0  nop
    ctx->pc = 0x28372cu;
    // NOP
    // 0x283730: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x283730u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[0]); }
    // 0x283734: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x283734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x283738: 0xc06ca2e  jal         func_1B28B8
    ctx->pc = 0x283738u;
    SET_GPR_U32(ctx, 31, 0x283740u);
    ctx->pc = 0x28373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283738u;
    // 0x28373c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28B8u, 0x283738u, 0x283740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283740u;
label_283740:
    // 0x283740: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x283740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_283744:
    // 0x283744: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x283744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x283748: 0x24500840  addiu       $s0, $v0, 0x840
    ctx->pc = 0x283748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x28374c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x28374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x283750: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x283750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x283754: 0xc06ca3a  jal         func_1B28E8
    ctx->pc = 0x283754u;
    SET_GPR_U32(ctx, 31, 0x28375Cu);
    ctx->pc = 0x283758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283754u;
    // 0x283758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28E8u, 0x283754u, 0x28375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28375Cu;
label_28375c:
    // 0x28375c: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x28375cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x283760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283764: 0xc06ca46  jal         func_1B2918
    ctx->pc = 0x283764u;
    SET_GPR_U32(ctx, 31, 0x28376Cu);
    ctx->pc = 0x283768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283764u;
    // 0x283768: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2918u, 0x283764u, 0x28376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28376Cu;
label_28376c:
    // 0x28376c: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x28376cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x283770: 0xc62205a8  lwc1        $f2, 0x5A8($s1)
    ctx->pc = 0x283770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283774: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x283774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x283778: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x283778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x28377c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28377cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x283780: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x283780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283784: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x283784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x283788: 0xc6840014  lwc1        $f4, 0x14($s4)
    ctx->pc = 0x283788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28378c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283790: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x283790u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x283794: 0x460000c5  abs.s       $f3, $f0
    ctx->pc = 0x283794u;
    ctx->f[3] = FPU_ABS_S(ctx->f[0]);
    // 0x283798: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x283798u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x28379c: 0x460118e9  min.s       $f3, $f3, $f1
    ctx->pc = 0x28379cu;
    ctx->f[3] = std::min(ctx->f[3], ctx->f[1]);
    // 0x2837a0: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x2837a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2837a4: 0x0  nop
    ctx->pc = 0x2837a4u;
    // NOP
    // 0x2837a8: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x2837A8u;
    {
        const bool branch_taken_0x2837a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2837a8) {
            ctx->pc = 0x2837ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2837A8u;
            // 0x2837ac: 0x9282001c  lbu         $v0, 0x1C($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28383Cu;
            goto label_28383c;
        }
    }
    ctx->pc = 0x2837B0u;
    // 0x2837b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2837b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2837b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2837b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2837b8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2837b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2837bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2837bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2837c0: 0x0  nop
    ctx->pc = 0x2837c0u;
    // NOP
    // 0x2837c4: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x2837C4u;
    {
        const bool branch_taken_0x2837c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2837c4) {
            ctx->pc = 0x2837C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2837C4u;
            // 0x2837c8: 0x9282001c  lbu         $v0, 0x1C($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28383Cu;
            goto label_28383c;
        }
    }
    ctx->pc = 0x2837CCu;
    // 0x2837cc: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x2837ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2837d0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2837d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2837d4: 0x0  nop
    ctx->pc = 0x2837d4u;
    // NOP
    // 0x2837d8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2837D8u;
    {
        const bool branch_taken_0x2837d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2837d8) {
            ctx->pc = 0x2837DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2837D8u;
            // 0x2837dc: 0x92820000  lbu         $v0, 0x0($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2837E8u;
            goto label_2837e8;
        }
    }
    ctx->pc = 0x2837E0u;
    // 0x2837e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2837E0u;
    {
        const bool branch_taken_0x2837e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837E0u;
        // 0x2837e4: 0x92820002  lbu         $v0, 0x2($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837e0) {
            ctx->pc = 0x28383Cu;
            goto label_28383c;
        }
    }
    ctx->pc = 0x2837E8u;
label_2837e8:
    // 0x2837e8: 0x0  nop
    ctx->pc = 0x2837e8u;
    // NOP
    // 0x2837ec: 0x0  nop
    ctx->pc = 0x2837ecu;
    // NOP
    // 0x2837f0: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x2837f0u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x2837f4: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x2837f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x2837f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2837f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2837fc: 0x0  nop
    ctx->pc = 0x2837fcu;
    // NOP
    // 0x283800: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283804: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x283804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x283808: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x283808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28380c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28380cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x283810: 0x0  nop
    ctx->pc = 0x283810u;
    // NOP
    // 0x283814: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x283814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x283818: 0xa260001d  sb          $zero, 0x1D($s3)
    ctx->pc = 0x283818u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x28381c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x28381cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x283820: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x283820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x283824: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x283824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x283828: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x283828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28382c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28382cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x283830: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x283830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x283834: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x283834u;
    {
        const bool branch_taken_0x283834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283834u;
        // 0x283838: 0xa262001c  sb          $v0, 0x1C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283834) {
            ctx->pc = 0x283848u;
            goto label_283848;
        }
    }
    ctx->pc = 0x28383Cu;
label_28383c:
    // 0x28383c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x28383cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x283840: 0xa262001c  sb          $v0, 0x1C($s3)
    ctx->pc = 0x283840u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x283844: 0xa263001d  sb          $v1, 0x1D($s3)
    ctx->pc = 0x283844u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 29), (uint8_t)GPR_U32(ctx, 3));
label_283848:
    // 0x283848: 0x922205b5  lbu         $v0, 0x5B5($s1)
    ctx->pc = 0x283848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1461)));
    // 0x28384c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28384Cu;
    {
        const bool branch_taken_0x28384c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28384Cu;
        // 0x283850: 0x9263001c  lbu         $v1, 0x1C($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28384c) {
            ctx->pc = 0x283868u;
            goto label_283868;
        }
    }
    ctx->pc = 0x283854u;
    // 0x283854: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x283854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x283858: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x283858u;
    {
        const bool branch_taken_0x283858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x283858) {
            ctx->pc = 0x28385Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283858u;
            // 0x28385c: 0xa22005b5  sb          $zero, 0x5B5($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1461), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28387Cu;
            goto label_28387c;
        }
    }
    ctx->pc = 0x283860u;
    // 0x283860: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x283860u;
    {
        const bool branch_taken_0x283860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283860u;
        // 0x283864: 0x92430128  lbu         $v1, 0x128($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283860) {
            ctx->pc = 0x283880u;
            goto label_283880;
        }
    }
    ctx->pc = 0x283868u;
label_283868:
    // 0x283868: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x283868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x28386c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28386Cu;
    {
        const bool branch_taken_0x28386c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28386c) {
            ctx->pc = 0x283870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28386Cu;
            // 0x283870: 0x92430128  lbu         $v1, 0x128($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283880u;
            goto label_283880;
        }
    }
    ctx->pc = 0x283874u;
    // 0x283874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283878: 0xa22205b5  sb          $v0, 0x5B5($s1)
    ctx->pc = 0x283878u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1461), (uint8_t)GPR_U32(ctx, 2));
label_28387c:
    // 0x28387c: 0x92430128  lbu         $v1, 0x128($s2)
    ctx->pc = 0x28387cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 296)));
label_283880:
    // 0x283880: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x283880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x283884: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x283884u;
    {
        const bool branch_taken_0x283884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283884u;
        // 0x283888: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283884) {
            ctx->pc = 0x2839ECu;
            goto label_2839ec;
        }
    }
    ctx->pc = 0x28388Cu;
    // 0x28388c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28388cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x283890: 0x2442ecd0  addiu       $v0, $v0, -0x1330
    ctx->pc = 0x283890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
    // 0x283894: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x283894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x283898: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x283898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28389c: 0x800008  jr          $a0
    ctx->pc = 0x28389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2838A4u: goto label_2838a4;
            case 0x2838C0u: goto label_2838c0;
            case 0x2838D8u: goto label_2838d8;
            case 0x283988u: goto label_283988;
            case 0x283990u: goto label_283990;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28389Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2838A4u;
label_2838a4:
    // 0x2838a4: 0xc68d0014  lwc1        $f13, 0x14($s4)
    ctx->pc = 0x2838a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2838a8: 0xc0a157e  jal         func_2855F8
    ctx->pc = 0x2838A8u;
    SET_GPR_U32(ctx, 31, 0x2838B0u);
    ctx->pc = 0x2838ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2838A8u;
    // 0x2838ac: 0xc62c05a8  lwc1        $f12, 0x5A8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2855F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2855F8u, 0x2838A8u, 0x2838B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2838B0u;
label_2838b0:
    // 0x2838b0: 0xe62005a8  swc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2838b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
    // 0x2838b4: 0xa22005b4  sb          $zero, 0x5B4($s1)
    ctx->pc = 0x2838b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1460), (uint8_t)GPR_U32(ctx, 0));
    // 0x2838b8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2838B8u;
    {
        const bool branch_taken_0x2838b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2838BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838B8u;
        // 0x2838bc: 0xa22005b5  sb          $zero, 0x5B5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1461), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838b8) {
            ctx->pc = 0x283988u;
            goto label_283988;
        }
    }
    ctx->pc = 0x2838C0u;
label_2838c0:
    // 0x2838c0: 0xa260001d  sb          $zero, 0x1D($s3)
    ctx->pc = 0x2838c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x2838c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2838c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2838c8: 0xa260001c  sb          $zero, 0x1C($s3)
    ctx->pc = 0x2838c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2838cc: 0xa22005b6  sb          $zero, 0x5B6($s1)
    ctx->pc = 0x2838ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1462), (uint8_t)GPR_U32(ctx, 0));
    // 0x2838d0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2838D0u;
    {
        const bool branch_taken_0x2838d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2838D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838D0u;
        // 0x2838d4: 0xa22005b5  sb          $zero, 0x5B5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1461), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838d0) {
            ctx->pc = 0x2839FCu;
            goto label_2839fc;
        }
    }
    ctx->pc = 0x2838D8u;
label_2838d8:
    // 0x2838d8: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x2838d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2838dc: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x2838dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2838e0: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2838E0u;
    {
        const bool branch_taken_0x2838e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2838E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838E0u;
        // 0x2838e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838e0) {
            ctx->pc = 0x2839F4u;
            goto label_2839f4;
        }
    }
    ctx->pc = 0x2838E8u;
    // 0x2838e8: 0x8e44012c  lw          $a0, 0x12C($s2)
    ctx->pc = 0x2838e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x2838ec: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x2838ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x2838f0: 0xae43012c  sw          $v1, 0x12C($s2)
    ctx->pc = 0x2838f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 3));
    // 0x2838f4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2838f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2838f8: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2838f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2838fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2838FCu;
    {
        const bool branch_taken_0x2838fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2838fc) {
            ctx->pc = 0x283900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2838FCu;
            // 0x283900: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x283904u;
            goto label_283904;
        }
    }
    ctx->pc = 0x283904u;
label_283904:
    // 0x283904: 0x2012  mflo        $a0
    ctx->pc = 0x283904u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x283908: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x283908u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x28390c: 0x1812  mflo        $v1
    ctx->pc = 0x28390cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x283910: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283910u;
    {
        const bool branch_taken_0x283910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x283914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283910u;
        // 0x283914: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283910) {
            ctx->pc = 0x28392Cu;
            goto label_28392c;
        }
    }
    ctx->pc = 0x283918u;
    // 0x283918: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x283918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28391c: 0xc0a157e  jal         func_2855F8
    ctx->pc = 0x28391Cu;
    SET_GPR_U32(ctx, 31, 0x283924u);
    ctx->pc = 0x283920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28391Cu;
    // 0x283920: 0xc68d0014  lwc1        $f13, 0x14($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2855F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2855F8u, 0x28391Cu, 0x283924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283924u;
label_283924:
    // 0x283924: 0xe62005a8  swc1        $f0, 0x5A8($s1)
    ctx->pc = 0x283924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
    // 0x283928: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x283928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_28392c:
    // 0x28392c: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x28392cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x283930: 0x24440840  addiu       $a0, $v0, 0x840
    ctx->pc = 0x283930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x283934: 0xc06ca46  jal         func_1B2918
    ctx->pc = 0x283934u;
    SET_GPR_U32(ctx, 31, 0x28393Cu);
    ctx->pc = 0x283938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283934u;
    // 0x283938: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2918u, 0x283934u, 0x28393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28393Cu;
label_28393c:
    // 0x28393c: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x28393cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x283940: 0x8e45012c  lw          $a1, 0x12C($s2)
    ctx->pc = 0x283940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x283944: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x283944u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x283948: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x283948u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x28394c: 0xb71823  subu        $v1, $a1, $s7
    ctx->pc = 0x28394cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x283950: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x283950u;
    {
        const bool branch_taken_0x283950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283950) {
            ctx->pc = 0x283954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283950u;
            // 0x283954: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x283958u;
            goto label_283958;
        }
    }
    ctx->pc = 0x283958u;
label_283958:
    // 0x283958: 0x2012  mflo        $a0
    ctx->pc = 0x283958u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x28395c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x28395cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x283960: 0x1812  mflo        $v1
    ctx->pc = 0x283960u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x283964: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x283964u;
    {
        const bool branch_taken_0x283964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x283968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283964u;
        // 0x283968: 0xa6102b  sltu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283964) {
            ctx->pc = 0x2839F8u;
            goto label_2839f8;
        }
    }
    ctx->pc = 0x28396Cu;
    // 0x28396c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x28396Cu;
    {
        const bool branch_taken_0x28396c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28396Cu;
        // 0x283970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28396c) {
            ctx->pc = 0x2839F4u;
            goto label_2839f4;
        }
    }
    ctx->pc = 0x283974u;
    // 0x283974: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x283974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x283978: 0xa22205b4  sb          $v0, 0x5B4($s1)
    ctx->pc = 0x283978u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1460), (uint8_t)GPR_U32(ctx, 2));
    // 0x28397c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283980: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x283980u;
    {
        const bool branch_taken_0x283980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283980u;
        // 0x283984: 0xa2430128  sb          $v1, 0x128($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 296), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283980) {
            ctx->pc = 0x2839FCu;
            goto label_2839fc;
        }
    }
    ctx->pc = 0x283988u;
label_283988:
    // 0x283988: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x283988u;
    {
        const bool branch_taken_0x283988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283988u;
        // 0x28398c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283988) {
            ctx->pc = 0x2839F4u;
            goto label_2839f4;
        }
    }
    ctx->pc = 0x283990u;
label_283990:
    // 0x283990: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x283990u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x283994: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x283994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x283998: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283998u;
    {
        const bool branch_taken_0x283998 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x28399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283998u;
        // 0x28399c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283998) {
            ctx->pc = 0x2839A8u;
            goto label_2839a8;
        }
    }
    ctx->pc = 0x2839A0u;
    // 0x2839a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2839A0u;
    {
        const bool branch_taken_0x2839a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839A0u;
        // 0x2839a4: 0xa2420128  sb          $v0, 0x128($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 296), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839a0) {
            ctx->pc = 0x2839C0u;
            goto label_2839c0;
        }
    }
    ctx->pc = 0x2839A8u;
label_2839a8:
    // 0x2839a8: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2839A8u;
    {
        const bool branch_taken_0x2839a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2839a8) {
            ctx->pc = 0x2839ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2839A8u;
            // 0x2839ac: 0x8e420138  lw          $v0, 0x138($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2839B8u;
            goto label_2839b8;
        }
    }
    ctx->pc = 0x2839B0u;
    // 0x2839b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2839B0u;
    {
        const bool branch_taken_0x2839b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839B0u;
        // 0x2839b4: 0xae400138  sw          $zero, 0x138($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839b0) {
            ctx->pc = 0x2839C0u;
            goto label_2839c0;
        }
    }
    ctx->pc = 0x2839B8u;
label_2839b8:
    // 0x2839b8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2839b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2839bc: 0xae420138  sw          $v0, 0x138($s2)
    ctx->pc = 0x2839bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 312), GPR_U32(ctx, 2));
label_2839c0:
    // 0x2839c0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2839c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2839c4: 0x8e430138  lw          $v1, 0x138($s2)
    ctx->pc = 0x2839c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x2839c8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2839c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2839cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2839CCu;
    {
        const bool branch_taken_0x2839cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839CCu;
        // 0x2839d0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839cc) {
            ctx->pc = 0x2839F8u;
            goto label_2839f8;
        }
    }
    ctx->pc = 0x2839D4u;
    // 0x2839d4: 0xa22005b4  sb          $zero, 0x5B4($s1)
    ctx->pc = 0x2839d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1460), (uint8_t)GPR_U32(ctx, 0));
    // 0x2839d8: 0xa2430128  sb          $v1, 0x128($s2)
    ctx->pc = 0x2839d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 296), (uint8_t)GPR_U32(ctx, 3));
    // 0x2839dc: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x2839dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x2839e0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2839e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2839e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2839E4u;
    {
        const bool branch_taken_0x2839e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839E4u;
        // 0x2839e8: 0xae420138  sw          $v0, 0x138($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839e4) {
            ctx->pc = 0x2839F8u;
            goto label_2839f8;
        }
    }
    ctx->pc = 0x2839ECu;
label_2839ec:
    // 0x2839ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2839ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2839f0: 0xa22005b4  sb          $zero, 0x5B4($s1)
    ctx->pc = 0x2839f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1460), (uint8_t)GPR_U32(ctx, 0));
label_2839f4:
    // 0x2839f4: 0xa2420128  sb          $v0, 0x128($s2)
    ctx->pc = 0x2839f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 296), (uint8_t)GPR_U32(ctx, 2));
label_2839f8:
    // 0x2839f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2839f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2839fc:
    // 0x2839fc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2839fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x283a00: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x283a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x283a04: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x283a04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283a08: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x283a08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x283a0c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x283a0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x283a10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x283a10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x283a14: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x283a14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283a18: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x283a18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283a1c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x283a1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283a20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283a24: 0x3e00008  jr          $ra
    ctx->pc = 0x283A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A24u;
        // 0x283a28: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283A2Cu;
    // 0x283a2c: 0x0  nop
    ctx->pc = 0x283a2cu;
    // NOP
    ctx->pc = 0x283a30u;
}
