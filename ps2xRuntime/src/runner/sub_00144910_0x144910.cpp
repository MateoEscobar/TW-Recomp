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

// Function: sub_00144910
// Address: 0x144910 - 0x144948
void sub_00144910_0x144910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144910_0x144910");
#endif

    switch (ctx->pc) {
        case 0x144910u: goto label_144910;
        case 0x144914u: goto label_144914;
        case 0x144918u: goto label_144918;
        case 0x14491cu: goto label_14491c;
        case 0x144920u: goto label_144920;
        case 0x144924u: goto label_144924;
        case 0x144928u: goto label_144928;
        case 0x14492cu: goto label_14492c;
        case 0x144930u: goto label_144930;
        case 0x144934u: goto label_144934;
        case 0x144938u: goto label_144938;
        case 0x14493cu: goto label_14493c;
        case 0x144940u: goto label_144940;
        case 0x144944u: goto label_144944;
        default: break;
    }

    ctx->pc = 0x144910u;

label_144910:
    // 0x144910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_144914:
    // 0x144914: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x144914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_144918:
    // 0x144918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14491c:
    // 0x14491c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14491cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_144920:
    // 0x144920: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x144920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_144924:
    // 0x144924: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x144924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_144928:
    // 0x144928: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x144928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_14492c:
    // 0x14492c: 0x60f809  jalr        $v1
label_144930:
    if (ctx->pc == 0x144930u) {
        ctx->pc = 0x144930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14492Cu;
        // 0x144930: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144934u;
        goto label_144934;
    }
    ctx->pc = 0x14492Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x144934u);
        ctx->pc = 0x144930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14492Cu;
        // 0x144930: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14492Cu, 0x144934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144934u;
label_144934:
    // 0x144934: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x144934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_144938:
    // 0x144938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14493c:
    // 0x14493c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14493cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_144940:
    // 0x144940: 0x3e00008  jr          $ra
label_144944:
    if (ctx->pc == 0x144944u) {
        ctx->pc = 0x144944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144940u;
        // 0x144944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144948u;
        goto label_fallthrough_0x144940;
    }
    ctx->pc = 0x144940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144940u;
        // 0x144944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x144940:
    ctx->pc = 0x144948u;
}
