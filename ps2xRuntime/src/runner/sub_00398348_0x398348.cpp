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

// Function: sub_00398348
// Address: 0x398348 - 0x3983b0
void sub_00398348_0x398348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398348_0x398348");
#endif

    ctx->pc = 0x398348u;

    // 0x398348: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x398348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39834c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x39834Cu;
    {
        const bool branch_taken_0x39834c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x398350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39834Cu;
        // 0x398350: 0x24e20020  addiu       $v0, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39834c) {
            ctx->pc = 0x398378u;
            goto label_398378;
        }
    }
    ctx->pc = 0x398354u;
    // 0x398354: 0x52142  srl         $a0, $a1, 5
    ctx->pc = 0x398354u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x398358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x398358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39835c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x39835cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x398360: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x398360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x398364: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x398364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x398368: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x398368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x39836c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x398370: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x398370u;
    {
        const bool branch_taken_0x398370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398370u;
        // 0x398374: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398370) {
            ctx->pc = 0x39839Cu;
            goto label_39839c;
        }
    }
    ctx->pc = 0x398378u;
label_398378:
    // 0x398378: 0x52142  srl         $a0, $a1, 5
    ctx->pc = 0x398378u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x39837c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39837cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398380: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x398380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x398384: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x398384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x398388: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x398388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39838c: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x39838cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x398390: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x398390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x398394: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x398394u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x398398: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x398398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_39839c:
    // 0x39839c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39839cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3983a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3983a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3983a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3983A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3983A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983A4u;
        // 0x3983a8: 0xa0e267e8  sb          $v0, 0x67E8($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 26600), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3983A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3983ACu;
    // 0x3983ac: 0x0  nop
    ctx->pc = 0x3983acu;
    // NOP
    ctx->pc = 0x3983b0u;
}
