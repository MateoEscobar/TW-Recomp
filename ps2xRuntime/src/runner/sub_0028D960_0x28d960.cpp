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

// Function: sub_0028D960
// Address: 0x28d960 - 0x28d9e0
void sub_0028D960_0x28d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D960_0x28d960");
#endif

    switch (ctx->pc) {
        case 0x28d960u: goto label_28d960;
        case 0x28d964u: goto label_28d964;
        case 0x28d968u: goto label_28d968;
        case 0x28d96cu: goto label_28d96c;
        case 0x28d970u: goto label_28d970;
        case 0x28d974u: goto label_28d974;
        case 0x28d978u: goto label_28d978;
        case 0x28d97cu: goto label_28d97c;
        case 0x28d980u: goto label_28d980;
        case 0x28d984u: goto label_28d984;
        case 0x28d988u: goto label_28d988;
        case 0x28d98cu: goto label_28d98c;
        case 0x28d990u: goto label_28d990;
        case 0x28d994u: goto label_28d994;
        case 0x28d998u: goto label_28d998;
        case 0x28d99cu: goto label_28d99c;
        case 0x28d9a0u: goto label_28d9a0;
        case 0x28d9a4u: goto label_28d9a4;
        case 0x28d9a8u: goto label_28d9a8;
        case 0x28d9acu: goto label_28d9ac;
        case 0x28d9b0u: goto label_28d9b0;
        case 0x28d9b4u: goto label_28d9b4;
        case 0x28d9b8u: goto label_28d9b8;
        case 0x28d9bcu: goto label_28d9bc;
        case 0x28d9c0u: goto label_28d9c0;
        case 0x28d9c4u: goto label_28d9c4;
        case 0x28d9c8u: goto label_28d9c8;
        case 0x28d9ccu: goto label_28d9cc;
        case 0x28d9d0u: goto label_28d9d0;
        case 0x28d9d4u: goto label_28d9d4;
        case 0x28d9d8u: goto label_28d9d8;
        case 0x28d9dcu: goto label_28d9dc;
        default: break;
    }

    ctx->pc = 0x28d960u;

label_28d960:
    // 0x28d960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_28d964:
    // 0x28d964: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28d964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_28d968:
    // 0x28d968: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28d968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28d96c:
    // 0x28d96c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28d970:
    // 0x28d970: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28d970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_28d974:
    // 0x28d974: 0x8090002c  lb          $s0, 0x2C($a0)
    ctx->pc = 0x28d974u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_28d978:
    // 0x28d978: 0x6000011  bltz        $s0, . + 4 + (0x11 << 2)
label_28d97c:
    if (ctx->pc == 0x28D97Cu) {
        ctx->pc = 0x28D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D978u;
        // 0x28d97c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D980u;
        goto label_28d980;
    }
    ctx->pc = 0x28D978u;
    {
        const bool branch_taken_0x28d978 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x28D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D978u;
        // 0x28d97c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d978) {
            ctx->pc = 0x28D9C0u;
            goto label_28d9c0;
        }
    }
    ctx->pc = 0x28D980u;
label_28d980:
    // 0x28d980: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x28d980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_28d984:
    // 0x28d984: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x28d984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_28d988:
    // 0x28d988: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x28d988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28d98c:
    // 0x28d98c: 0x0  nop
    ctx->pc = 0x28d98cu;
    // NOP
label_28d990:
    // 0x28d990: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x28d990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28d994:
    // 0x28d994: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x28d994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_28d998:
    // 0x28d998: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x28d998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_28d99c:
    // 0x28d99c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_28d9a0:
    // 0x28d9a0: 0x40f809  jalr        $v0
label_28d9a4:
    if (ctx->pc == 0x28D9A4u) {
        ctx->pc = 0x28D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9A0u;
        // 0x28d9a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D9A8u;
        goto label_28d9a8;
    }
    ctx->pc = 0x28D9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28D9A8u);
        ctx->pc = 0x28D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9A0u;
        // 0x28d9a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D9A0u, 0x28D9A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D9A8u;
label_28d9a8:
    // 0x28d9a8: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
label_28d9ac:
    if (ctx->pc == 0x28D9ACu) {
        ctx->pc = 0x28D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9A8u;
        // 0x28d9ac: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D9B0u;
        goto label_28d9b0;
    }
    ctx->pc = 0x28D9A8u;
    {
        const bool branch_taken_0x28d9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x28d9a8) {
            ctx->pc = 0x28D9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D9A8u;
            // 0x28d9ac: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D9B8u;
            goto label_28d9b8;
        }
    }
    ctx->pc = 0x28D9B0u;
label_28d9b0:
    // 0x28d9b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_28d9b4:
    if (ctx->pc == 0x28D9B4u) {
        ctx->pc = 0x28D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9B0u;
        // 0x28d9b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D9B8u;
        goto label_28d9b8;
    }
    ctx->pc = 0x28D9B0u;
    {
        const bool branch_taken_0x28d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9B0u;
        // 0x28d9b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9b0) {
            ctx->pc = 0x28D9C4u;
            goto label_28d9c4;
        }
    }
    ctx->pc = 0x28D9B8u;
label_28d9b8:
    // 0x28d9b8: 0x601fff5  bgez        $s0, . + 4 + (-0xB << 2)
label_28d9bc:
    if (ctx->pc == 0x28D9BCu) {
        ctx->pc = 0x28D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9B8u;
        // 0x28d9bc: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D9C0u;
        goto label_28d9c0;
    }
    ctx->pc = 0x28D9B8u;
    {
        const bool branch_taken_0x28d9b8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x28D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9B8u;
        // 0x28d9bc: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9b8) {
            ctx->pc = 0x28D990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d990;
        }
    }
    ctx->pc = 0x28D9C0u;
label_28d9c0:
    // 0x28d9c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28d9c4:
    // 0x28d9c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28d9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28d9c8:
    // 0x28d9c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28d9c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28d9cc:
    // 0x28d9cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28d9ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28d9d0:
    // 0x28d9d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28d9d4:
    // 0x28d9d4: 0x3e00008  jr          $ra
label_28d9d8:
    if (ctx->pc == 0x28D9D8u) {
        ctx->pc = 0x28D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9D4u;
        // 0x28d9d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D9DCu;
        goto label_28d9dc;
    }
    ctx->pc = 0x28D9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9D4u;
        // 0x28d9d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D9DCu;
label_28d9dc:
    // 0x28d9dc: 0x0  nop
    ctx->pc = 0x28d9dcu;
    // NOP
    ctx->pc = 0x28d9e0u;
}
