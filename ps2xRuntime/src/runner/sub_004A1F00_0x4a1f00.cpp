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

// Function: sub_004A1F00
// Address: 0x4a1f00 - 0x4a1f70
void sub_004A1F00_0x4a1f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1F00_0x4a1f00");
#endif

    switch (ctx->pc) {
        case 0x4a1f00u: goto label_4a1f00;
        case 0x4a1f04u: goto label_4a1f04;
        case 0x4a1f08u: goto label_4a1f08;
        case 0x4a1f0cu: goto label_4a1f0c;
        case 0x4a1f10u: goto label_4a1f10;
        case 0x4a1f14u: goto label_4a1f14;
        case 0x4a1f18u: goto label_4a1f18;
        case 0x4a1f1cu: goto label_4a1f1c;
        case 0x4a1f20u: goto label_4a1f20;
        case 0x4a1f24u: goto label_4a1f24;
        case 0x4a1f28u: goto label_4a1f28;
        case 0x4a1f2cu: goto label_4a1f2c;
        case 0x4a1f30u: goto label_4a1f30;
        case 0x4a1f34u: goto label_4a1f34;
        case 0x4a1f38u: goto label_4a1f38;
        case 0x4a1f3cu: goto label_4a1f3c;
        case 0x4a1f40u: goto label_4a1f40;
        case 0x4a1f44u: goto label_4a1f44;
        case 0x4a1f48u: goto label_4a1f48;
        case 0x4a1f4cu: goto label_4a1f4c;
        case 0x4a1f50u: goto label_4a1f50;
        case 0x4a1f54u: goto label_4a1f54;
        case 0x4a1f58u: goto label_4a1f58;
        case 0x4a1f5cu: goto label_4a1f5c;
        case 0x4a1f60u: goto label_4a1f60;
        case 0x4a1f64u: goto label_4a1f64;
        case 0x4a1f68u: goto label_4a1f68;
        case 0x4a1f6cu: goto label_4a1f6c;
        default: break;
    }

    ctx->pc = 0x4a1f00u;

label_4a1f00:
    // 0x4a1f00: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x4a1f00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_4a1f04:
    // 0x4a1f04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a1f04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a1f08:
    // 0x4a1f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a1f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a1f0c:
    // 0x4a1f0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a1f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4a1f10:
    // 0x4a1f10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4a1f14:
    if (ctx->pc == 0x4A1F14u) {
        ctx->pc = 0x4A1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F10u;
        // 0x4a1f14: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1F18u;
        goto label_4a1f18;
    }
    ctx->pc = 0x4A1F10u;
    {
        const bool branch_taken_0x4a1f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F10u;
        // 0x4a1f14: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1f10) {
            ctx->pc = 0x4A1F24u;
            goto label_4a1f24;
        }
    }
    ctx->pc = 0x4A1F18u;
label_4a1f18:
    // 0x4a1f18: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4a1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4a1f1c:
    // 0x4a1f1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a1f20:
    if (ctx->pc == 0x4A1F20u) {
        ctx->pc = 0x4A1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F1Cu;
        // 0x4a1f20: 0x2446ffd8  addiu       $a2, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1F24u;
        goto label_4a1f24;
    }
    ctx->pc = 0x4A1F1Cu;
    {
        const bool branch_taken_0x4a1f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F1Cu;
        // 0x4a1f20: 0x2446ffd8  addiu       $a2, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1f1c) {
            ctx->pc = 0x4A1F2Cu;
            goto label_4a1f2c;
        }
    }
    ctx->pc = 0x4A1F24u;
label_4a1f24:
    // 0x4a1f24: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4a1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4a1f28:
    // 0x4a1f28: 0x2446ffc8  addiu       $a2, $v0, -0x38
    ctx->pc = 0x4a1f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
label_4a1f2c:
    // 0x4a1f2c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x4a1f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4a1f30:
    // 0x4a1f30: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x4a1f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4a1f34:
    // 0x4a1f34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4a1f38:
    if (ctx->pc == 0x4A1F38u) {
        ctx->pc = 0x4A1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F34u;
        // 0x4a1f38: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1F3Cu;
        goto label_4a1f3c;
    }
    ctx->pc = 0x4A1F34u;
    {
        const bool branch_taken_0x4a1f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F34u;
        // 0x4a1f38: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1f34) {
            ctx->pc = 0x4A1F60u;
            goto label_4a1f60;
        }
    }
    ctx->pc = 0x4A1F3Cu;
label_4a1f3c:
    // 0x4a1f3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4a1f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4a1f40:
    // 0x4a1f40: 0x2442f8f0  addiu       $v0, $v0, -0x710
    ctx->pc = 0x4a1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965488));
label_4a1f44:
    // 0x4a1f44: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4a1f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a1f48:
    // 0x4a1f48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a1f4c:
    // 0x4a1f4c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4a1f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a1f50:
    // 0x4a1f50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a1f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a1f54:
    // 0x4a1f54: 0x40f809  jalr        $v0
label_4a1f58:
    if (ctx->pc == 0x4A1F58u) {
        ctx->pc = 0x4A1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F54u;
        // 0x4a1f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1F5Cu;
        goto label_4a1f5c;
    }
    ctx->pc = 0x4A1F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A1F5Cu);
        ctx->pc = 0x4A1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F54u;
        // 0x4a1f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1F54u, 0x4A1F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A1F5Cu;
label_4a1f5c:
    // 0x4a1f5c: 0x0  nop
    ctx->pc = 0x4a1f5cu;
    // NOP
label_4a1f60:
    // 0x4a1f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a1f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a1f64:
    // 0x4a1f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a1f68:
    // 0x4a1f68: 0x3e00008  jr          $ra
label_4a1f6c:
    if (ctx->pc == 0x4A1F6Cu) {
        ctx->pc = 0x4A1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F68u;
        // 0x4a1f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1F70u;
        goto label_fallthrough_0x4a1f68;
    }
    ctx->pc = 0x4A1F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F68u;
        // 0x4a1f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a1f68:
    ctx->pc = 0x4A1F70u;
}
