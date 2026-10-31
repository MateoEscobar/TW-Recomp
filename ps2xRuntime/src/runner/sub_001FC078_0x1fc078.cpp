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

// Function: sub_001FC078
// Address: 0x1fc078 - 0x1fc110
void sub_001FC078_0x1fc078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC078_0x1fc078");
#endif

    switch (ctx->pc) {
        case 0x1fc078u: goto label_1fc078;
        case 0x1fc07cu: goto label_1fc07c;
        case 0x1fc080u: goto label_1fc080;
        case 0x1fc084u: goto label_1fc084;
        case 0x1fc088u: goto label_1fc088;
        case 0x1fc08cu: goto label_1fc08c;
        case 0x1fc090u: goto label_1fc090;
        case 0x1fc094u: goto label_1fc094;
        case 0x1fc098u: goto label_1fc098;
        case 0x1fc09cu: goto label_1fc09c;
        case 0x1fc0a0u: goto label_1fc0a0;
        case 0x1fc0a4u: goto label_1fc0a4;
        case 0x1fc0a8u: goto label_1fc0a8;
        case 0x1fc0acu: goto label_1fc0ac;
        case 0x1fc0b0u: goto label_1fc0b0;
        case 0x1fc0b4u: goto label_1fc0b4;
        case 0x1fc0b8u: goto label_1fc0b8;
        case 0x1fc0bcu: goto label_1fc0bc;
        case 0x1fc0c0u: goto label_1fc0c0;
        case 0x1fc0c4u: goto label_1fc0c4;
        case 0x1fc0c8u: goto label_1fc0c8;
        case 0x1fc0ccu: goto label_1fc0cc;
        case 0x1fc0d0u: goto label_1fc0d0;
        case 0x1fc0d4u: goto label_1fc0d4;
        case 0x1fc0d8u: goto label_1fc0d8;
        case 0x1fc0dcu: goto label_1fc0dc;
        case 0x1fc0e0u: goto label_1fc0e0;
        case 0x1fc0e4u: goto label_1fc0e4;
        case 0x1fc0e8u: goto label_1fc0e8;
        case 0x1fc0ecu: goto label_1fc0ec;
        case 0x1fc0f0u: goto label_1fc0f0;
        case 0x1fc0f4u: goto label_1fc0f4;
        case 0x1fc0f8u: goto label_1fc0f8;
        case 0x1fc0fcu: goto label_1fc0fc;
        case 0x1fc100u: goto label_1fc100;
        case 0x1fc104u: goto label_1fc104;
        case 0x1fc108u: goto label_1fc108;
        case 0x1fc10cu: goto label_1fc10c;
        default: break;
    }

    ctx->pc = 0x1fc078u;

label_1fc078:
    // 0x1fc078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fc07c:
    // 0x1fc07c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fc080:
    // 0x1fc080: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fc080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1fc084:
    // 0x1fc084: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc088:
    // 0x1fc088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fc08c:
    // 0x1fc08c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1fc08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1fc090:
    // 0x1fc090: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1fc094:
    if (ctx->pc == 0x1FC094u) {
        ctx->pc = 0x1FC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC090u;
        // 0x1fc094: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC098u;
        goto label_1fc098;
    }
    ctx->pc = 0x1FC090u;
    {
        const bool branch_taken_0x1fc090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC090u;
        // 0x1fc094: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc090) {
            ctx->pc = 0x1FC0FCu;
            goto label_1fc0fc;
        }
    }
    ctx->pc = 0x1FC098u;
label_1fc098:
    // 0x1fc098: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x1fc098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1fc09c:
    // 0x1fc09c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fc09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fc0a0:
    // 0x1fc0a0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1fc0a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1fc0a4:
    // 0x1fc0a4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1fc0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1fc0a8:
    // 0x1fc0a8: 0x60f809  jalr        $v1
label_1fc0ac:
    if (ctx->pc == 0x1FC0ACu) {
        ctx->pc = 0x1FC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0A8u;
        // 0x1fc0ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0B0u;
        goto label_1fc0b0;
    }
    ctx->pc = 0x1FC0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FC0B0u);
        ctx->pc = 0x1FC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0A8u;
        // 0x1fc0ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC0A8u, 0x1FC0B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC0B0u;
label_1fc0b0:
    // 0x1fc0b0: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1fc0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1fc0b4:
    // 0x1fc0b4: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x1fc0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1fc0b8:
    // 0x1fc0b8: 0x26107ea8  addiu       $s0, $s0, 0x7EA8
    ctx->pc = 0x1fc0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32424));
label_1fc0bc:
    // 0x1fc0bc: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1fc0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1fc0c0:
    // 0x1fc0c0: 0xc13a560  jal         func_4E9580
label_1fc0c4:
    if (ctx->pc == 0x1FC0C4u) {
        ctx->pc = 0x1FC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0C0u;
        // 0x1fc0c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0C8u;
        goto label_1fc0c8;
    }
    ctx->pc = 0x1FC0C0u;
    SET_GPR_U32(ctx, 31, 0x1FC0C8u);
    ctx->pc = 0x1FC0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC0C0u;
    // 0x1fc0c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9580u, 0x1FC0C0u, 0x1FC0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC0C8u;
label_1fc0c8:
    // 0x1fc0c8: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x1fc0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1fc0cc:
    // 0x1fc0cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fc0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fc0d0:
    // 0x1fc0d0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1fc0d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1fc0d4:
    // 0x1fc0d4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1fc0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1fc0d8:
    // 0x1fc0d8: 0x60f809  jalr        $v1
label_1fc0dc:
    if (ctx->pc == 0x1FC0DCu) {
        ctx->pc = 0x1FC0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0D8u;
        // 0x1fc0dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0E0u;
        goto label_1fc0e0;
    }
    ctx->pc = 0x1FC0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FC0E0u);
        ctx->pc = 0x1FC0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0D8u;
        // 0x1fc0dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC0D8u, 0x1FC0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC0E0u;
label_1fc0e0:
    // 0x1fc0e0: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x1fc0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1fc0e4:
    // 0x1fc0e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fc0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc0e8:
    // 0x1fc0e8: 0xc139fe8  jal         func_4E7FA0
label_1fc0ec:
    if (ctx->pc == 0x1FC0ECu) {
        ctx->pc = 0x1FC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0E8u;
        // 0x1fc0ec: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0F0u;
        goto label_1fc0f0;
    }
    ctx->pc = 0x1FC0E8u;
    SET_GPR_U32(ctx, 31, 0x1FC0F0u);
    ctx->pc = 0x1FC0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC0E8u;
    // 0x1fc0ec: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x1FC0E8u, 0x1FC0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC0F0u;
label_1fc0f0:
    // 0x1fc0f0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1fc0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1fc0f4:
    // 0x1fc0f4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1fc0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1fc0f8:
    // 0x1fc0f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fc0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc0fc:
    // 0x1fc0fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc100:
    // 0x1fc100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc104:
    // 0x1fc104: 0x3e00008  jr          $ra
label_1fc108:
    if (ctx->pc == 0x1FC108u) {
        ctx->pc = 0x1FC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC104u;
        // 0x1fc108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC10Cu;
        goto label_1fc10c;
    }
    ctx->pc = 0x1FC104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC104u;
        // 0x1fc108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC10Cu;
label_1fc10c:
    // 0x1fc10c: 0x0  nop
    ctx->pc = 0x1fc10cu;
    // NOP
    ctx->pc = 0x1fc110u;
}
