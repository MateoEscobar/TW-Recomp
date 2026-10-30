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

// Function: sub_002C9628
// Address: 0x2c9628 - 0x2c96a0
void sub_002C9628_0x2c9628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9628_0x2c9628");
#endif

    switch (ctx->pc) {
        case 0x2c9644u: goto label_2c9644;
        case 0x2c9650u: goto label_2c9650;
        case 0x2c965cu: goto label_2c965c;
        case 0x2c9678u: goto label_2c9678;
        default: break;
    }

    ctx->pc = 0x2c9628u;

    // 0x2c9628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c962c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c9630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9638: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c9638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c963c: 0xc0a3678  jal         func_28D9E0
    ctx->pc = 0x2C963Cu;
    SET_GPR_U32(ctx, 31, 0x2C9644u);
    ctx->pc = 0x2C9640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C963Cu;
    // 0x2c9640: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9E0u, 0x2C963Cu, 0x2C9644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9644u;
label_2c9644:
    // 0x2c9644: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c9644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c9648: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C9648u;
    SET_GPR_U32(ctx, 31, 0x2C9650u);
    ctx->pc = 0x2C964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9648u;
    // 0x2c964c: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C9648u, 0x2C9650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9650u;
label_2c9650:
    // 0x2c9650: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c9650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9654: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2C9654u;
    SET_GPR_U32(ctx, 31, 0x2C965Cu);
    ctx->pc = 0x2C9658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9654u;
    // 0x2c9658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2C9654u, 0x2C965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C965Cu;
label_2c965c:
    // 0x2c965c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c965cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9660: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C9660u;
    {
        const bool branch_taken_0x2c9660 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9660u;
        // 0x2c9664: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9660) {
            ctx->pc = 0x2C968Cu;
            goto label_2c968c;
        }
    }
    ctx->pc = 0x2C9668u;
    // 0x2c9668: 0x68465b17  ldl         $a2, 0x5B17($v0)
    ctx->pc = 0x2c9668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c966c: 0x6c465b10  ldr         $a2, 0x5B10($v0)
    ctx->pc = 0x2c966cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c9670: 0xc0a39c2  jal         func_28E708
    ctx->pc = 0x2C9670u;
    SET_GPR_U32(ctx, 31, 0x2C9678u);
    ctx->pc = 0x2C9674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9670u;
    // 0x2c9674: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2C9670u, 0x2C9678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9678u;
label_2c9678:
    // 0x2c9678: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2c9678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2c967c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2c967cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2c9680: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2c9680u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x2c9684: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2c9684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2c9688: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2c9688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_2c968c:
    // 0x2c968c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c968cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9698: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9698u;
        // 0x2c969c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C96A0u;
}
