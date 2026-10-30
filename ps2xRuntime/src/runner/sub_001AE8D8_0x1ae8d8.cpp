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

// Function: sub_001AE8D8
// Address: 0x1ae8d8 - 0x1ae980
void sub_001AE8D8_0x1ae8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE8D8_0x1ae8d8");
#endif

    switch (ctx->pc) {
        case 0x1ae8fcu: goto label_1ae8fc;
        case 0x1ae910u: goto label_1ae910;
        default: break;
    }

    ctx->pc = 0x1ae8d8u;

    // 0x1ae8d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ae8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ae8dc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ae8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ae8e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ae8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ae8e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ae8e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ae8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ae8ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ae8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae8f4: 0xc06b936  jal         func_1AE4D8
    ctx->pc = 0x1AE8F4u;
    SET_GPR_U32(ctx, 31, 0x1AE8FCu);
    ctx->pc = 0x1AE8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8F4u;
    // 0x1ae8f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE4D8u, 0x1AE8F4u, 0x1AE8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8FCu;
label_1ae8fc:
    // 0x1ae8fc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1ae8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1ae900: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ae900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae904: 0x2483d810  addiu       $v1, $a0, -0x27F0
    ctx->pc = 0x1ae904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957072));
    // 0x1ae908: 0x24650280  addiu       $a1, $v1, 0x280
    ctx->pc = 0x1ae908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x1ae90c: 0x84620042  lh          $v0, 0x42($v1)
    ctx->pc = 0x1ae90cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x5DD852u));
label_1ae910:
    // 0x1ae910: 0x50510001  beql        $v0, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AE910u;
    {
        const bool branch_taken_0x1ae910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1ae910) {
            ctx->pc = 0x1AE914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE910u;
            // 0x1ae914: 0xa4660042  sh          $a2, 0x42($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE918u;
            goto label_1ae918;
        }
    }
    ctx->pc = 0x1AE918u;
label_1ae918:
    // 0x1ae918: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1ae918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1ae91c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1ae91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ae920: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AE920u;
    {
        const bool branch_taken_0x1ae920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae920) {
            ctx->pc = 0x1AE924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE920u;
            // 0x1ae924: 0x84620042  lh          $v0, 0x42($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae910;
        }
    }
    ctx->pc = 0x1AE928u;
    // 0x1ae928: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1ae928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ae92c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1ae92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ae930: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ae930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae934: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AE934u;
    {
        const bool branch_taken_0x1ae934 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1AE938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE934u;
        // 0x1ae938: 0xa0700019  sb          $s0, 0x19($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 25), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae934) {
            ctx->pc = 0x1AE960u;
            goto label_1ae960;
        }
    }
    ctx->pc = 0x1AE93Cu;
    // 0x1ae93c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1ae93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ae940: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ae940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae944: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x1ae944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ae948: 0x2484d810  addiu       $a0, $a0, -0x27F0
    ctx->pc = 0x1ae948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957072));
    // 0x1ae94c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae950: 0xa0a2001b  sb          $v0, 0x1B($a1)
    ctx->pc = 0x1ae950u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae954: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ae954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ae958: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE958u;
    {
        const bool branch_taken_0x1ae958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE958u;
        // 0x1ae95c: 0xa4710042  sh          $s1, 0x42($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae958) {
            ctx->pc = 0x1AE968u;
            goto label_1ae968;
        }
    }
    ctx->pc = 0x1AE960u;
label_1ae960:
    // 0x1ae960: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ae960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae964: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x1ae964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
label_1ae968:
    // 0x1ae968: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ae968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae96c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ae96cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae970: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ae970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae978: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE978u;
        // 0x1ae97c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE980u;
}
