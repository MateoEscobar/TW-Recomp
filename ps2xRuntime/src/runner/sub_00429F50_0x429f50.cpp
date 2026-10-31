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

// Function: sub_00429F50
// Address: 0x429f50 - 0x429fa8
void sub_00429F50_0x429f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429F50_0x429f50");
#endif

    switch (ctx->pc) {
        case 0x429f50u: goto label_429f50;
        case 0x429f54u: goto label_429f54;
        case 0x429f58u: goto label_429f58;
        case 0x429f5cu: goto label_429f5c;
        case 0x429f60u: goto label_429f60;
        case 0x429f64u: goto label_429f64;
        case 0x429f68u: goto label_429f68;
        case 0x429f6cu: goto label_429f6c;
        case 0x429f70u: goto label_429f70;
        case 0x429f74u: goto label_429f74;
        case 0x429f78u: goto label_429f78;
        case 0x429f7cu: goto label_429f7c;
        case 0x429f80u: goto label_429f80;
        case 0x429f84u: goto label_429f84;
        case 0x429f88u: goto label_429f88;
        case 0x429f8cu: goto label_429f8c;
        case 0x429f90u: goto label_429f90;
        case 0x429f94u: goto label_429f94;
        case 0x429f98u: goto label_429f98;
        case 0x429f9cu: goto label_429f9c;
        case 0x429fa0u: goto label_429fa0;
        case 0x429fa4u: goto label_429fa4;
        default: break;
    }

    ctx->pc = 0x429f50u;

label_429f50:
    // 0x429f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x429f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_429f54:
    // 0x429f54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x429f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_429f58:
    // 0x429f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x429f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_429f5c:
    // 0x429f5c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x429f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_429f60:
    // 0x429f60: 0x8c4b27e4  lw          $t3, 0x27E4($v0)
    ctx->pc = 0x429f60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_429f64:
    // 0x429f64: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x429f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_429f68:
    // 0x429f68: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x429f68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_429f6c:
    // 0x429f6c: 0x24a5bce8  addiu       $a1, $a1, -0x4318
    ctx->pc = 0x429f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950120));
label_429f70:
    // 0x429f70: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x429f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_429f74:
    // 0x429f74: 0x2508bcf0  addiu       $t0, $t0, -0x4310
    ctx->pc = 0x429f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950128));
label_429f78:
    // 0x429f78: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x429f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_429f7c:
    // 0x429f7c: 0x240900b9  addiu       $t1, $zero, 0xB9
    ctx->pc = 0x429f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
label_429f80:
    // 0x429f80: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x429f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_429f84:
    // 0x429f84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x429f84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429f88:
    // 0x429f88: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x429f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_429f8c:
    // 0x429f8c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x429f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_429f90:
    // 0x429f90: 0x40f809  jalr        $v0
label_429f94:
    if (ctx->pc == 0x429F94u) {
        ctx->pc = 0x429F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429F90u;
        // 0x429f94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429F98u;
        goto label_429f98;
    }
    ctx->pc = 0x429F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x429F98u);
        ctx->pc = 0x429F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429F90u;
        // 0x429f94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429F90u, 0x429F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x429F98u;
label_429f98:
    // 0x429f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x429f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_429f9c:
    // 0x429f9c: 0x3e00008  jr          $ra
label_429fa0:
    if (ctx->pc == 0x429FA0u) {
        ctx->pc = 0x429FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429F9Cu;
        // 0x429fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429FA4u;
        goto label_429fa4;
    }
    ctx->pc = 0x429F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429F9Cu;
        // 0x429fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429FA4u;
label_429fa4:
    // 0x429fa4: 0x0  nop
    ctx->pc = 0x429fa4u;
    // NOP
    ctx->pc = 0x429fa8u;
}
