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

// Function: sub_00444A00
// Address: 0x444a00 - 0x444ac8
void sub_00444A00_0x444a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444A00_0x444a00");
#endif

    switch (ctx->pc) {
        case 0x444a30u: goto label_444a30;
        case 0x444a48u: goto label_444a48;
        case 0x444a50u: goto label_444a50;
        case 0x444a58u: goto label_444a58;
        case 0x444a64u: goto label_444a64;
        case 0x444a70u: goto label_444a70;
        case 0x444a78u: goto label_444a78;
        case 0x444a80u: goto label_444a80;
        case 0x444a90u: goto label_444a90;
        case 0x444aa4u: goto label_444aa4;
        default: break;
    }

    ctx->pc = 0x444a00u;

    // 0x444a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x444a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x444a04: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x444a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x444a08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x444a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x444a0c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x444a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x444a10: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x444a10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x444a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x444a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x444a18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x444a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x444a1c: 0x2450a248  addiu       $s0, $v0, -0x5DB8
    ctx->pc = 0x444a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943304));
    // 0x444a20: 0x8c44a248  lw          $a0, -0x5DB8($v0)
    ctx->pc = 0x444a20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51A248u));
    // 0x444a24: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x444a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x444a28: 0xc11127c  jal         func_4449F0
    ctx->pc = 0x444A28u;
    SET_GPR_U32(ctx, 31, 0x444A30u);
    ctx->pc = 0x444A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444A28u;
    // 0x444a2c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4449F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4449F0u, 0x444A28u, 0x444A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444A30u;
label_444a30:
    // 0x444a30: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x444a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x444a34: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x444a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x444a38: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x444a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x444a3c: 0x24a59ec8  addiu       $a1, $a1, -0x6138
    ctx->pc = 0x444a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942408));
    // 0x444a40: 0xc111266  jal         func_444998
    ctx->pc = 0x444A40u;
    SET_GPR_U32(ctx, 31, 0x444A48u);
    ctx->pc = 0x444A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444A40u;
    // 0x444a44: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    ctx->in_delay_slot = false;
    ctx->pc = 0x444998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444998u, 0x444A40u, 0x444A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444A48u;
label_444a48:
    // 0x444a48: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x444A48u;
    SET_GPR_U32(ctx, 31, 0x444A50u);
    ctx->pc = 0x444A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444A48u;
    // 0x444a4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x444A48u, 0x444A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444A50u;
label_444a50:
    // 0x444a50: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x444A50u;
    SET_GPR_U32(ctx, 31, 0x444A58u);
    ctx->pc = 0x444A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444A50u;
    // 0x444a54: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x444A50u, 0x444A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444A58u;
label_444a58:
    // 0x444a58: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x444a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x444a5c: 0xc11127c  jal         func_4449F0
    ctx->pc = 0x444A5Cu;
    SET_GPR_U32(ctx, 31, 0x444A64u);
    ctx->pc = 0x444A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444A5Cu;
    // 0x444a60: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4449F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4449F0u, 0x444A5Cu, 0x444A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444A64u;
label_444a64:
    // 0x444a64: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x444a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x444a68: 0xc11127c  jal         func_4449F0
    ctx->pc = 0x444A68u;
    SET_GPR_U32(ctx, 31, 0x444A70u);
    ctx->pc = 0x444A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444A68u;
    // 0x444a6c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4449F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4449F0u, 0x444A68u, 0x444A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444A70u;
label_444a70:
    // 0x444a70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x444a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x444a74: 0x0  nop
    ctx->pc = 0x444a74u;
    // NOP
label_444a78:
    // 0x444a78: 0xc111278  jal         func_4449E0
    ctx->pc = 0x444A78u;
    SET_GPR_U32(ctx, 31, 0x444A80u);
    ctx->pc = 0x444A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444A78u;
    // 0x444a7c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4449E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4449E0u, 0x444A78u, 0x444A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444A80u;
label_444a80:
    // 0x444a80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x444a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x444a84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x444a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444a88: 0xc11127c  jal         func_4449F0
    ctx->pc = 0x444A88u;
    SET_GPR_U32(ctx, 31, 0x444A90u);
    ctx->pc = 0x444A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444A88u;
    // 0x444a8c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4449F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4449F0u, 0x444A88u, 0x444A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444A90u;
label_444a90:
    // 0x444a90: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x444a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x444a94: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x444A94u;
    {
        const bool branch_taken_0x444a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x444a94) {
            ctx->pc = 0x444A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444A94u;
            // 0x444a98: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_444a78;
        }
    }
    ctx->pc = 0x444A9Cu;
    // 0x444a9c: 0xc111278  jal         func_4449E0
    ctx->pc = 0x444A9Cu;
    SET_GPR_U32(ctx, 31, 0x444AA4u);
    ctx->pc = 0x444AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444A9Cu;
    // 0x444aa0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4449E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4449E0u, 0x444A9Cu, 0x444AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444AA4u;
label_444aa4:
    // 0x444aa4: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x444aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x444aa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x444aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x444aac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x444aacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x444ab0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x444ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x444ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x444ab8: 0xac62a240  sw          $v0, -0x5DC0($v1)
    ctx->pc = 0x444ab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x51A240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x51A240u, _value); } while (0);
    // 0x444abc: 0x3e00008  jr          $ra
    ctx->pc = 0x444ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444ABCu;
        // 0x444ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444AC4u;
    // 0x444ac4: 0x0  nop
    ctx->pc = 0x444ac4u;
    // NOP
    ctx->pc = 0x444ac8u;
}
