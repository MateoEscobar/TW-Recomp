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

// Function: sub_004EAF38
// Address: 0x4eaf38 - 0x4eafa8
void sub_004EAF38_0x4eaf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EAF38_0x4eaf38");
#endif

    switch (ctx->pc) {
        case 0x4eaf38u: goto label_4eaf38;
        case 0x4eaf3cu: goto label_4eaf3c;
        case 0x4eaf40u: goto label_4eaf40;
        case 0x4eaf44u: goto label_4eaf44;
        case 0x4eaf48u: goto label_4eaf48;
        case 0x4eaf4cu: goto label_4eaf4c;
        case 0x4eaf50u: goto label_4eaf50;
        case 0x4eaf54u: goto label_4eaf54;
        case 0x4eaf58u: goto label_4eaf58;
        case 0x4eaf5cu: goto label_4eaf5c;
        case 0x4eaf60u: goto label_4eaf60;
        case 0x4eaf64u: goto label_4eaf64;
        case 0x4eaf68u: goto label_4eaf68;
        case 0x4eaf6cu: goto label_4eaf6c;
        case 0x4eaf70u: goto label_4eaf70;
        case 0x4eaf74u: goto label_4eaf74;
        case 0x4eaf78u: goto label_4eaf78;
        case 0x4eaf7cu: goto label_4eaf7c;
        case 0x4eaf80u: goto label_4eaf80;
        case 0x4eaf84u: goto label_4eaf84;
        case 0x4eaf88u: goto label_4eaf88;
        case 0x4eaf8cu: goto label_4eaf8c;
        case 0x4eaf90u: goto label_4eaf90;
        case 0x4eaf94u: goto label_4eaf94;
        case 0x4eaf98u: goto label_4eaf98;
        case 0x4eaf9cu: goto label_4eaf9c;
        case 0x4eafa0u: goto label_4eafa0;
        case 0x4eafa4u: goto label_4eafa4;
        default: break;
    }

    ctx->pc = 0x4eaf38u;

label_4eaf38:
    // 0x4eaf38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4eaf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4eaf3c:
    // 0x4eaf3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4eaf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4eaf40:
    // 0x4eaf40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4eaf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4eaf44:
    // 0x4eaf44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eaf44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eaf48:
    // 0x4eaf48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4eaf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4eaf4c:
    // 0x4eaf4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4eaf4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4eaf50:
    // 0x4eaf50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eaf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eaf54:
    // 0x4eaf54: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4eaf58:
    if (ctx->pc == 0x4EAF58u) {
        ctx->pc = 0x4EAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAF54u;
        // 0x4eaf58: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAF5Cu;
        goto label_4eaf5c;
    }
    ctx->pc = 0x4EAF54u;
    {
        const bool branch_taken_0x4eaf54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAF54u;
        // 0x4eaf58: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eaf54) {
            ctx->pc = 0x4EAF8Cu;
            goto label_4eaf8c;
        }
    }
    ctx->pc = 0x4EAF5Cu;
label_4eaf5c:
    // 0x4eaf5c: 0xc07dfae  jal         func_1F7EB8
label_4eaf60:
    if (ctx->pc == 0x4EAF60u) {
        ctx->pc = 0x4EAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAF5Cu;
        // 0x4eaf60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAF64u;
        goto label_4eaf64;
    }
    ctx->pc = 0x4EAF5Cu;
    SET_GPR_U32(ctx, 31, 0x4EAF64u);
    ctx->pc = 0x4EAF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAF5Cu;
    // 0x4eaf60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB8u, 0x4EAF5Cu, 0x4EAF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAF64u;
label_4eaf64:
    // 0x4eaf64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4eaf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4eaf68:
    // 0x4eaf68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eaf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eaf6c:
    // 0x4eaf6c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4eaf6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4eaf70:
    // 0x4eaf70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4eaf70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eaf74:
    // 0x4eaf74: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4eaf74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4eaf78:
    // 0x4eaf78: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eaf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eaf7c:
    // 0x4eaf7c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eaf7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eaf80:
    // 0x4eaf80: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eaf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eaf84:
    // 0x4eaf84: 0x60f809  jalr        $v1
label_4eaf88:
    if (ctx->pc == 0x4EAF88u) {
        ctx->pc = 0x4EAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAF84u;
        // 0x4eaf88: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAF8Cu;
        goto label_4eaf8c;
    }
    ctx->pc = 0x4EAF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EAF8Cu);
        ctx->pc = 0x4EAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAF84u;
        // 0x4eaf88: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAF84u, 0x4EAF8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EAF8Cu;
label_4eaf8c:
    // 0x4eaf8c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4eaf8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eaf90:
    // 0x4eaf90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4eaf90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eaf94:
    // 0x4eaf94: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4eaf94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eaf98:
    // 0x4eaf98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eaf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eaf9c:
    // 0x4eaf9c: 0x3e00008  jr          $ra
label_4eafa0:
    if (ctx->pc == 0x4EAFA0u) {
        ctx->pc = 0x4EAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAF9Cu;
        // 0x4eafa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAFA4u;
        goto label_4eafa4;
    }
    ctx->pc = 0x4EAF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAF9Cu;
        // 0x4eafa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EAFA4u;
label_4eafa4:
    // 0x4eafa4: 0x0  nop
    ctx->pc = 0x4eafa4u;
    // NOP
    ctx->pc = 0x4eafa8u;
}
