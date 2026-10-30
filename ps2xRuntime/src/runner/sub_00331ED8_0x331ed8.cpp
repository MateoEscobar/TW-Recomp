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

// Function: sub_00331ED8
// Address: 0x331ed8 - 0x331f98
void sub_00331ED8_0x331ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331ED8_0x331ed8");
#endif

    switch (ctx->pc) {
        case 0x331f0cu: goto label_331f0c;
        case 0x331f20u: goto label_331f20;
        default: break;
    }

    ctx->pc = 0x331ed8u;

    // 0x331ed8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x331ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x331edc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x331edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x331ee0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x331ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331ee4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x331ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x331ee8: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x331ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x331eec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x331eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x331ef0: 0x2260018  mult        $zero, $s1, $a2
    ctx->pc = 0x331ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x331ef4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x331ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331ef8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x331ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331efc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331f00: 0x3012  mflo        $a2
    ctx->pc = 0x331f00u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x331f04: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x331F04u;
    SET_GPR_U32(ctx, 31, 0x331F0Cu);
    ctx->pc = 0x331F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331F04u;
    // 0x331f08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x331F04u, 0x331F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F0Cu;
label_331f0c:
    // 0x331f0c: 0x1a20000e  blez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x331F0Cu;
    {
        const bool branch_taken_0x331f0c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x331F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331F0Cu;
        // 0x331f10: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331f0c) {
            ctx->pc = 0x331F48u;
            goto label_331f48;
        }
    }
    ctx->pc = 0x331F14u;
    // 0x331f14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x331f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331f18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x331f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x331f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_331f20:
    // 0x331f20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x331f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x331f24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x331f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x331f28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x331f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x331f2c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x331f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x331f30: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x331f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x331f34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x331f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x331f38: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x331f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x331f3c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x331f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x331f40: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x331F40u;
    {
        const bool branch_taken_0x331f40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x331F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331F40u;
        // 0x331f44: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331f40) {
            ctx->pc = 0x331F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331f20;
        }
    }
    ctx->pc = 0x331F48u;
label_331f48:
    // 0x331f48: 0x86040006  lh          $a0, 0x6($s0)
    ctx->pc = 0x331f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x331f4c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x331f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x331f50: 0x2251018  mult        $v0, $s1, $a1
    ctx->pc = 0x331f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x331f54: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x331f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x331f58: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x331f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x331f5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331f60: 0x2446ffd8  addiu       $a2, $v0, -0x28
    ctx->pc = 0x331f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x331f64: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x331f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x331f68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x331f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x331f6c: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x331f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x331f70: 0xa6110006  sh          $s1, 0x6($s0)
    ctx->pc = 0x331f70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x331f74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x331f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x331f78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x331f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331f7c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x331f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x331f80: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x331f80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331f84: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x331f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x331f88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x331f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x331F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331F8Cu;
        // 0x331f90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331F94u;
    // 0x331f94: 0x0  nop
    ctx->pc = 0x331f94u;
    // NOP
    ctx->pc = 0x331f98u;
}
