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

// Function: sub_004A1F70
// Address: 0x4a1f70 - 0x4a1fd8
void sub_004A1F70_0x4a1f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1F70_0x4a1f70");
#endif

    switch (ctx->pc) {
        case 0x4a1f70u: goto label_4a1f70;
        case 0x4a1f74u: goto label_4a1f74;
        case 0x4a1f78u: goto label_4a1f78;
        case 0x4a1f7cu: goto label_4a1f7c;
        case 0x4a1f80u: goto label_4a1f80;
        case 0x4a1f84u: goto label_4a1f84;
        case 0x4a1f88u: goto label_4a1f88;
        case 0x4a1f8cu: goto label_4a1f8c;
        case 0x4a1f90u: goto label_4a1f90;
        case 0x4a1f94u: goto label_4a1f94;
        case 0x4a1f98u: goto label_4a1f98;
        case 0x4a1f9cu: goto label_4a1f9c;
        case 0x4a1fa0u: goto label_4a1fa0;
        case 0x4a1fa4u: goto label_4a1fa4;
        case 0x4a1fa8u: goto label_4a1fa8;
        case 0x4a1facu: goto label_4a1fac;
        case 0x4a1fb0u: goto label_4a1fb0;
        case 0x4a1fb4u: goto label_4a1fb4;
        case 0x4a1fb8u: goto label_4a1fb8;
        case 0x4a1fbcu: goto label_4a1fbc;
        case 0x4a1fc0u: goto label_4a1fc0;
        case 0x4a1fc4u: goto label_4a1fc4;
        case 0x4a1fc8u: goto label_4a1fc8;
        case 0x4a1fccu: goto label_4a1fcc;
        case 0x4a1fd0u: goto label_4a1fd0;
        case 0x4a1fd4u: goto label_4a1fd4;
        default: break;
    }

    ctx->pc = 0x4a1f70u;

label_4a1f70:
    // 0x4a1f70: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x4a1f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_4a1f74:
    // 0x4a1f74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a1f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a1f78:
    // 0x4a1f78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a1f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4a1f7c:
    // 0x4a1f7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4a1f80:
    if (ctx->pc == 0x4A1F80u) {
        ctx->pc = 0x4A1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F7Cu;
        // 0x4a1f80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1F84u;
        goto label_4a1f84;
    }
    ctx->pc = 0x4A1F7Cu;
    {
        const bool branch_taken_0x4a1f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F7Cu;
        // 0x4a1f80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1f7c) {
            ctx->pc = 0x4A1F90u;
            goto label_4a1f90;
        }
    }
    ctx->pc = 0x4A1F84u;
label_4a1f84:
    // 0x4a1f84: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4a1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4a1f88:
    // 0x4a1f88: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a1f8c:
    if (ctx->pc == 0x4A1F8Cu) {
        ctx->pc = 0x4A1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F88u;
        // 0x4a1f8c: 0x2449ffd8  addiu       $t1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1F90u;
        goto label_4a1f90;
    }
    ctx->pc = 0x4A1F88u;
    {
        const bool branch_taken_0x4a1f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F88u;
        // 0x4a1f8c: 0x2449ffd8  addiu       $t1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1f88) {
            ctx->pc = 0x4A1F98u;
            goto label_4a1f98;
        }
    }
    ctx->pc = 0x4A1F90u;
label_4a1f90:
    // 0x4a1f90: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4a1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4a1f94:
    // 0x4a1f94: 0x2449ffc8  addiu       $t1, $v0, -0x38
    ctx->pc = 0x4a1f94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
label_4a1f98:
    // 0x4a1f98: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x4a1f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4a1f9c:
    // 0x4a1f9c: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x4a1f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4a1fa0:
    // 0x4a1fa0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_4a1fa4:
    if (ctx->pc == 0x4A1FA4u) {
        ctx->pc = 0x4A1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1FA0u;
        // 0x4a1fa4: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1FA8u;
        goto label_4a1fa8;
    }
    ctx->pc = 0x4A1FA0u;
    {
        const bool branch_taken_0x4a1fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1FA0u;
        // 0x4a1fa4: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1fa0) {
            ctx->pc = 0x4A1FC8u;
            goto label_4a1fc8;
        }
    }
    ctx->pc = 0x4A1FA8u;
label_4a1fa8:
    // 0x4a1fa8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4a1fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4a1fac:
    // 0x4a1fac: 0x2442f908  addiu       $v0, $v0, -0x6F8
    ctx->pc = 0x4a1facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965512));
label_4a1fb0:
    // 0x4a1fb0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4a1fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a1fb4:
    // 0x4a1fb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a1fb8:
    // 0x4a1fb8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4a1fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4a1fbc:
    // 0x4a1fbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a1fc0:
    // 0x4a1fc0: 0x40f809  jalr        $v0
label_4a1fc4:
    if (ctx->pc == 0x4A1FC4u) {
        ctx->pc = 0x4A1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1FC0u;
        // 0x4a1fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1FC8u;
        goto label_4a1fc8;
    }
    ctx->pc = 0x4A1FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A1FC8u);
        ctx->pc = 0x4A1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1FC0u;
        // 0x4a1fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1FC0u, 0x4A1FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A1FC8u;
label_4a1fc8:
    // 0x4a1fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a1fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a1fcc:
    // 0x4a1fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a1fd0:
    // 0x4a1fd0: 0x3e00008  jr          $ra
label_4a1fd4:
    if (ctx->pc == 0x4A1FD4u) {
        ctx->pc = 0x4A1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1FD0u;
        // 0x4a1fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1FD8u;
        goto label_fallthrough_0x4a1fd0;
    }
    ctx->pc = 0x4A1FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1FD0u;
        // 0x4a1fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a1fd0:
    ctx->pc = 0x4A1FD8u;
}
