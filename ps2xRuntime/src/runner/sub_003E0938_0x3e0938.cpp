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

// Function: sub_003E0938
// Address: 0x3e0938 - 0x3e0980
void sub_003E0938_0x3e0938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0938_0x3e0938");
#endif

    switch (ctx->pc) {
        case 0x3e0938u: goto label_3e0938;
        case 0x3e093cu: goto label_3e093c;
        case 0x3e0940u: goto label_3e0940;
        case 0x3e0944u: goto label_3e0944;
        case 0x3e0948u: goto label_3e0948;
        case 0x3e094cu: goto label_3e094c;
        case 0x3e0950u: goto label_3e0950;
        case 0x3e0954u: goto label_3e0954;
        case 0x3e0958u: goto label_3e0958;
        case 0x3e095cu: goto label_3e095c;
        case 0x3e0960u: goto label_3e0960;
        case 0x3e0964u: goto label_3e0964;
        case 0x3e0968u: goto label_3e0968;
        case 0x3e096cu: goto label_3e096c;
        case 0x3e0970u: goto label_3e0970;
        case 0x3e0974u: goto label_3e0974;
        case 0x3e0978u: goto label_3e0978;
        case 0x3e097cu: goto label_3e097c;
        default: break;
    }

    ctx->pc = 0x3e0938u;

label_3e0938:
    // 0x3e0938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e0938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e093c:
    // 0x3e093c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e093cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3e0940:
    // 0x3e0940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e0940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e0944:
    // 0x3e0944: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e0944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e0948:
    // 0x3e0948: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e0948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e094c:
    // 0x3e094c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3e094cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e0950:
    // 0x3e0950: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e0950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e0954:
    // 0x3e0954: 0x40f809  jalr        $v0
label_3e0958:
    if (ctx->pc == 0x3E0958u) {
        ctx->pc = 0x3E0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0954u;
        // 0x3e0958: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E095Cu;
        goto label_3e095c;
    }
    ctx->pc = 0x3E0954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E095Cu);
        ctx->pc = 0x3E0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0954u;
        // 0x3e0958: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0954u, 0x3E095Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E095Cu;
label_3e095c:
    // 0x3e095c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e095cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0960:
    // 0x3e0960: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3e0960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3e0964:
    // 0x3e0964: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_3e0968:
    if (ctx->pc == 0x3E0968u) {
        ctx->pc = 0x3E0968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0964u;
        // 0x3e0968: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E096Cu;
        goto label_3e096c;
    }
    ctx->pc = 0x3E0964u;
    {
        const bool branch_taken_0x3e0964 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E0968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0964u;
        // 0x3e0968: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0964) {
            ctx->pc = 0x3E0974u;
            goto label_3e0974;
        }
    }
    ctx->pc = 0x3E096Cu;
label_3e096c:
    // 0x3e096c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e096cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e0970:
    // 0x3e0970: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x3e0970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_3e0974:
    // 0x3e0974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e0974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e0978:
    // 0x3e0978: 0x3e00008  jr          $ra
label_3e097c:
    if (ctx->pc == 0x3E097Cu) {
        ctx->pc = 0x3E097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0978u;
        // 0x3e097c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0980u;
        goto label_fallthrough_0x3e0978;
    }
    ctx->pc = 0x3E0978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0978u;
        // 0x3e097c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e0978:
    ctx->pc = 0x3E0980u;
}
