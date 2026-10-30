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

// Function: sub_0022FA78
// Address: 0x22fa78 - 0x22fc00
void sub_0022FA78_0x22fa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FA78_0x22fa78");
#endif

    switch (ctx->pc) {
        case 0x22fa78u: goto label_22fa78;
        case 0x22fa7cu: goto label_22fa7c;
        case 0x22fa80u: goto label_22fa80;
        case 0x22fa84u: goto label_22fa84;
        case 0x22fa88u: goto label_22fa88;
        case 0x22fa8cu: goto label_22fa8c;
        case 0x22fa90u: goto label_22fa90;
        case 0x22fa94u: goto label_22fa94;
        case 0x22fa98u: goto label_22fa98;
        case 0x22fa9cu: goto label_22fa9c;
        case 0x22faa0u: goto label_22faa0;
        case 0x22faa4u: goto label_22faa4;
        case 0x22faa8u: goto label_22faa8;
        case 0x22faacu: goto label_22faac;
        case 0x22fab0u: goto label_22fab0;
        case 0x22fab4u: goto label_22fab4;
        case 0x22fab8u: goto label_22fab8;
        case 0x22fabcu: goto label_22fabc;
        case 0x22fac0u: goto label_22fac0;
        case 0x22fac4u: goto label_22fac4;
        case 0x22fac8u: goto label_22fac8;
        case 0x22faccu: goto label_22facc;
        case 0x22fad0u: goto label_22fad0;
        case 0x22fad4u: goto label_22fad4;
        case 0x22fad8u: goto label_22fad8;
        case 0x22fadcu: goto label_22fadc;
        case 0x22fae0u: goto label_22fae0;
        case 0x22fae4u: goto label_22fae4;
        case 0x22fae8u: goto label_22fae8;
        case 0x22faecu: goto label_22faec;
        case 0x22faf0u: goto label_22faf0;
        case 0x22faf4u: goto label_22faf4;
        case 0x22faf8u: goto label_22faf8;
        case 0x22fafcu: goto label_22fafc;
        case 0x22fb00u: goto label_22fb00;
        case 0x22fb04u: goto label_22fb04;
        case 0x22fb08u: goto label_22fb08;
        case 0x22fb0cu: goto label_22fb0c;
        case 0x22fb10u: goto label_22fb10;
        case 0x22fb14u: goto label_22fb14;
        case 0x22fb18u: goto label_22fb18;
        case 0x22fb1cu: goto label_22fb1c;
        case 0x22fb20u: goto label_22fb20;
        case 0x22fb24u: goto label_22fb24;
        case 0x22fb28u: goto label_22fb28;
        case 0x22fb2cu: goto label_22fb2c;
        case 0x22fb30u: goto label_22fb30;
        case 0x22fb34u: goto label_22fb34;
        case 0x22fb38u: goto label_22fb38;
        case 0x22fb3cu: goto label_22fb3c;
        case 0x22fb40u: goto label_22fb40;
        case 0x22fb44u: goto label_22fb44;
        case 0x22fb48u: goto label_22fb48;
        case 0x22fb4cu: goto label_22fb4c;
        case 0x22fb50u: goto label_22fb50;
        case 0x22fb54u: goto label_22fb54;
        case 0x22fb58u: goto label_22fb58;
        case 0x22fb5cu: goto label_22fb5c;
        case 0x22fb60u: goto label_22fb60;
        case 0x22fb64u: goto label_22fb64;
        case 0x22fb68u: goto label_22fb68;
        case 0x22fb6cu: goto label_22fb6c;
        case 0x22fb70u: goto label_22fb70;
        case 0x22fb74u: goto label_22fb74;
        case 0x22fb78u: goto label_22fb78;
        case 0x22fb7cu: goto label_22fb7c;
        case 0x22fb80u: goto label_22fb80;
        case 0x22fb84u: goto label_22fb84;
        case 0x22fb88u: goto label_22fb88;
        case 0x22fb8cu: goto label_22fb8c;
        case 0x22fb90u: goto label_22fb90;
        case 0x22fb94u: goto label_22fb94;
        case 0x22fb98u: goto label_22fb98;
        case 0x22fb9cu: goto label_22fb9c;
        case 0x22fba0u: goto label_22fba0;
        case 0x22fba4u: goto label_22fba4;
        case 0x22fba8u: goto label_22fba8;
        case 0x22fbacu: goto label_22fbac;
        case 0x22fbb0u: goto label_22fbb0;
        case 0x22fbb4u: goto label_22fbb4;
        case 0x22fbb8u: goto label_22fbb8;
        case 0x22fbbcu: goto label_22fbbc;
        case 0x22fbc0u: goto label_22fbc0;
        case 0x22fbc4u: goto label_22fbc4;
        case 0x22fbc8u: goto label_22fbc8;
        case 0x22fbccu: goto label_22fbcc;
        case 0x22fbd0u: goto label_22fbd0;
        case 0x22fbd4u: goto label_22fbd4;
        case 0x22fbd8u: goto label_22fbd8;
        case 0x22fbdcu: goto label_22fbdc;
        case 0x22fbe0u: goto label_22fbe0;
        case 0x22fbe4u: goto label_22fbe4;
        case 0x22fbe8u: goto label_22fbe8;
        case 0x22fbecu: goto label_22fbec;
        case 0x22fbf0u: goto label_22fbf0;
        case 0x22fbf4u: goto label_22fbf4;
        case 0x22fbf8u: goto label_22fbf8;
        case 0x22fbfcu: goto label_22fbfc;
        default: break;
    }

    ctx->pc = 0x22fa78u;

label_22fa78:
    // 0x22fa78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22fa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22fa7c:
    // 0x22fa7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22fa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_22fa80:
    // 0x22fa80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22fa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22fa84:
    // 0x22fa84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22fa84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22fa88:
    // 0x22fa88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22fa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_22fa8c:
    // 0x22fa8c: 0x12000055  beqz        $s0, . + 4 + (0x55 << 2)
label_22fa90:
    if (ctx->pc == 0x22FA90u) {
        ctx->pc = 0x22FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA8Cu;
        // 0x22fa90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FA94u;
        goto label_22fa94;
    }
    ctx->pc = 0x22FA8Cu;
    {
        const bool branch_taken_0x22fa8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA8Cu;
        // 0x22fa90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa8c) {
            ctx->pc = 0x22FBE4u;
            goto label_22fbe4;
        }
    }
    ctx->pc = 0x22FA94u;
label_22fa94:
    // 0x22fa94: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x22fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_22fa98:
    // 0x22fa98: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
label_22fa9c:
    if (ctx->pc == 0x22FA9Cu) {
        ctx->pc = 0x22FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA98u;
        // 0x22fa9c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FAA0u;
        goto label_22faa0;
    }
    ctx->pc = 0x22FA98u;
    {
        const bool branch_taken_0x22fa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fa98) {
            ctx->pc = 0x22FA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FA98u;
            // 0x22fa9c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FBE8u;
            goto label_22fbe8;
        }
    }
    ctx->pc = 0x22FAA0u;
label_22faa0:
    // 0x22faa0: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x22faa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
label_22faa4:
    // 0x22faa4: 0x34a5800f  ori         $a1, $a1, 0x800F
    ctx->pc = 0x22faa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32783);
label_22faa8:
    // 0x22faa8: 0xc089988  jal         func_226620
label_22faac:
    if (ctx->pc == 0x22FAACu) {
        ctx->pc = 0x22FAB0u;
        goto label_22fab0;
    }
    ctx->pc = 0x22FAA8u;
    SET_GPR_U32(ctx, 31, 0x22FAB0u);
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22FAA8u, 0x22FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FAB0u;
label_22fab0:
    // 0x22fab0: 0xc089f66  jal         func_227D98
label_22fab4:
    if (ctx->pc == 0x22FAB4u) {
        ctx->pc = 0x22FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAB0u;
        // 0x22fab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FAB8u;
        goto label_22fab8;
    }
    ctx->pc = 0x22FAB0u;
    SET_GPR_U32(ctx, 31, 0x22FAB8u);
    ctx->pc = 0x22FAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FAB0u;
    // 0x22fab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x22FAB0u, 0x22FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FAB8u;
label_22fab8:
    // 0x22fab8: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_22fabc:
    if (ctx->pc == 0x22FABCu) {
        ctx->pc = 0x22FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAB8u;
        // 0x22fabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FAC0u;
        goto label_22fac0;
    }
    ctx->pc = 0x22FAB8u;
    {
        const bool branch_taken_0x22fab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAB8u;
        // 0x22fabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fab8) {
            ctx->pc = 0x22FBA4u;
            goto label_22fba4;
        }
    }
    ctx->pc = 0x22FAC0u;
label_22fac0:
    // 0x22fac0: 0xc09625a  jal         func_258968
label_22fac4:
    if (ctx->pc == 0x22FAC4u) {
        ctx->pc = 0x22FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAC0u;
        // 0x22fac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FAC8u;
        goto label_22fac8;
    }
    ctx->pc = 0x22FAC0u;
    SET_GPR_U32(ctx, 31, 0x22FAC8u);
    ctx->pc = 0x22FAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FAC0u;
    // 0x22fac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258968u, 0x22FAC0u, 0x22FAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FAC8u;
label_22fac8:
    // 0x22fac8: 0xc095fce  jal         func_257F38
label_22facc:
    if (ctx->pc == 0x22FACCu) {
        ctx->pc = 0x22FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAC8u;
        // 0x22facc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FAD0u;
        goto label_22fad0;
    }
    ctx->pc = 0x22FAC8u;
    SET_GPR_U32(ctx, 31, 0x22FAD0u);
    ctx->pc = 0x22FACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FAC8u;
    // 0x22facc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x22FAC8u, 0x22FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FAD0u;
label_22fad0:
    // 0x22fad0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x22fad0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_22fad4:
    // 0x22fad4: 0x10000004  b           . + 4 + (0x4 << 2)
label_22fad8:
    if (ctx->pc == 0x22FAD8u) {
        ctx->pc = 0x22FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAD4u;
        // 0x22fad8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FADCu;
        goto label_22fadc;
    }
    ctx->pc = 0x22FAD4u;
    {
        const bool branch_taken_0x22fad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAD4u;
        // 0x22fad8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fad4) {
            ctx->pc = 0x22FAE8u;
            goto label_22fae8;
        }
    }
    ctx->pc = 0x22FADCu;
label_22fadc:
    // 0x22fadc: 0x0  nop
    ctx->pc = 0x22fadcu;
    // NOP
label_22fae0:
    // 0x22fae0: 0xc094fca  jal         func_253F28
label_22fae4:
    if (ctx->pc == 0x22FAE4u) {
        ctx->pc = 0x22FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAE0u;
        // 0x22fae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FAE8u;
        goto label_22fae8;
    }
    ctx->pc = 0x22FAE0u;
    SET_GPR_U32(ctx, 31, 0x22FAE8u);
    ctx->pc = 0x22FAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FAE0u;
    // 0x22fae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x22FAE0u, 0x22FAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FAE8u;
label_22fae8:
    // 0x22fae8: 0xc095018  jal         func_254060
label_22faec:
    if (ctx->pc == 0x22FAECu) {
        ctx->pc = 0x22FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAE8u;
        // 0x22faec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FAF0u;
        goto label_22faf0;
    }
    ctx->pc = 0x22FAE8u;
    SET_GPR_U32(ctx, 31, 0x22FAF0u);
    ctx->pc = 0x22FAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FAE8u;
    // 0x22faec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22FAE8u, 0x22FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FAF0u;
label_22faf0:
    // 0x22faf0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_22faf4:
    if (ctx->pc == 0x22FAF4u) {
        ctx->pc = 0x22FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAF0u;
        // 0x22faf4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FAF8u;
        goto label_22faf8;
    }
    ctx->pc = 0x22FAF0u;
    {
        const bool branch_taken_0x22faf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAF0u;
        // 0x22faf4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22faf0) {
            ctx->pc = 0x22FAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fae0;
        }
    }
    ctx->pc = 0x22FAF8u;
label_22faf8:
    // 0x22faf8: 0xc094fb4  jal         func_253ED0
label_22fafc:
    if (ctx->pc == 0x22FAFCu) {
        ctx->pc = 0x22FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAF8u;
        // 0x22fafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB00u;
        goto label_22fb00;
    }
    ctx->pc = 0x22FAF8u;
    SET_GPR_U32(ctx, 31, 0x22FB00u);
    ctx->pc = 0x22FAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FAF8u;
    // 0x22fafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22FAF8u, 0x22FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB00u;
label_22fb00:
    // 0x22fb00: 0x8e25b734  lw          $a1, -0x48CC($s1)
    ctx->pc = 0x22fb00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
label_22fb04:
    // 0x22fb04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fb08:
    // 0x22fb08: 0x8e460794  lw          $a2, 0x794($s2)
    ctx->pc = 0x22fb08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1940)));
label_22fb0c:
    // 0x22fb0c: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x22fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_22fb10:
    // 0x22fb10: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x22fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_22fb14:
    // 0x22fb14: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_22fb18:
    // 0x22fb18: 0xc088b98  jal         func_222E60
label_22fb1c:
    if (ctx->pc == 0x22FB1Cu) {
        ctx->pc = 0x22FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB18u;
        // 0x22fb1c: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB20u;
        goto label_22fb20;
    }
    ctx->pc = 0x22FB18u;
    SET_GPR_U32(ctx, 31, 0x22FB20u);
    ctx->pc = 0x22FB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FB18u;
    // 0x22fb1c: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x22FB18u, 0x22FB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB20u;
label_22fb20:
    // 0x22fb20: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x22fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22fb24:
    // 0x22fb24: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x22fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_22fb28:
    // 0x22fb28: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x22fb28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22fb2c:
    // 0x22fb2c: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x22fb2cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_22fb30:
    // 0x22fb30: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x22fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_22fb34:
    // 0x22fb34: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x22fb34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_22fb38:
    // 0x22fb38: 0xa4430144  sh          $v1, 0x144($v0)
    ctx->pc = 0x22fb38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 324), (uint16_t)GPR_U32(ctx, 3));
label_22fb3c:
    // 0x22fb3c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22fb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22fb40:
    // 0x22fb40: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x22fb40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_22fb44:
    // 0x22fb44: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x22fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_22fb48:
    // 0x22fb48: 0x40f809  jalr        $v0
label_22fb4c:
    if (ctx->pc == 0x22FB4Cu) {
        ctx->pc = 0x22FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB48u;
        // 0x22fb4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB50u;
        goto label_22fb50;
    }
    ctx->pc = 0x22FB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22FB50u);
        ctx->pc = 0x22FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB48u;
        // 0x22fb4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FB48u, 0x22FB50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FB50u;
label_22fb50:
    // 0x22fb50: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_22fb54:
    if (ctx->pc == 0x22FB54u) {
        ctx->pc = 0x22FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB50u;
        // 0x22fb54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB58u;
        goto label_22fb58;
    }
    ctx->pc = 0x22FB50u;
    {
        const bool branch_taken_0x22fb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fb50) {
            ctx->pc = 0x22FB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FB50u;
            // 0x22fb54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FBA4u;
            goto label_22fba4;
        }
    }
    ctx->pc = 0x22FB58u;
label_22fb58:
    // 0x22fb58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22fb5c:
    // 0x22fb5c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22fb5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22fb60:
    // 0x22fb60: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22fb64:
    // 0x22fb64: 0x40f809  jalr        $v0
label_22fb68:
    if (ctx->pc == 0x22FB68u) {
        ctx->pc = 0x22FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB64u;
        // 0x22fb68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB6Cu;
        goto label_22fb6c;
    }
    ctx->pc = 0x22FB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22FB6Cu);
        ctx->pc = 0x22FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB64u;
        // 0x22fb68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FB64u, 0x22FB6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FB6Cu;
label_22fb6c:
    // 0x22fb6c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22fb70:
    // 0x22fb70: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x22fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_22fb74:
    // 0x22fb74: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22fb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22fb78:
    // 0x22fb78: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22fb7c:
    // 0x22fb7c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22fb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22fb80:
    // 0x22fb80: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x22fb80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_22fb84:
    // 0x22fb84: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x22fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_22fb88:
    // 0x22fb88: 0x40f809  jalr        $v0
label_22fb8c:
    if (ctx->pc == 0x22FB8Cu) {
        ctx->pc = 0x22FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB88u;
        // 0x22fb8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB90u;
        goto label_22fb90;
    }
    ctx->pc = 0x22FB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22FB90u);
        ctx->pc = 0x22FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB88u;
        // 0x22fb8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FB88u, 0x22FB90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FB90u;
label_22fb90:
    // 0x22fb90: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22fb94:
    // 0x22fb94: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x22fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_22fb98:
    // 0x22fb98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22fb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_22fb9c:
    // 0x22fb9c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22fb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22fba0:
    // 0x22fba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fba4:
    // 0x22fba4: 0xc089974  jal         func_2265D0
label_22fba8:
    if (ctx->pc == 0x22FBA8u) {
        ctx->pc = 0x22FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBA4u;
        // 0x22fba8: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBACu;
        goto label_22fbac;
    }
    ctx->pc = 0x22FBA4u;
    SET_GPR_U32(ctx, 31, 0x22FBACu);
    ctx->pc = 0x22FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBA4u;
    // 0x22fba8: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22FBA4u, 0x22FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FBACu;
label_22fbac:
    // 0x22fbac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22fbb0:
    // 0x22fbb0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22fbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22fbb4:
    // 0x22fbb4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22fbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_22fbb8:
    // 0x22fbb8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22fbb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_22fbbc:
    // 0x22fbbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22fbbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22fbc0:
    // 0x22fbc0: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22fbc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22fbc4:
    // 0x22fbc4: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x22fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22fbc8:
    // 0x22fbc8: 0x60f809  jalr        $v1
label_22fbcc:
    if (ctx->pc == 0x22FBCCu) {
        ctx->pc = 0x22FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBC8u;
        // 0x22fbcc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBD0u;
        goto label_22fbd0;
    }
    ctx->pc = 0x22FBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22FBD0u);
        ctx->pc = 0x22FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBC8u;
        // 0x22fbcc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FBC8u, 0x22FBD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FBD0u;
label_22fbd0:
    // 0x22fbd0: 0xc087502  jal         func_21D408
label_22fbd4:
    if (ctx->pc == 0x22FBD4u) {
        ctx->pc = 0x22FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBD0u;
        // 0x22fbd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBD8u;
        goto label_22fbd8;
    }
    ctx->pc = 0x22FBD0u;
    SET_GPR_U32(ctx, 31, 0x22FBD8u);
    ctx->pc = 0x22FBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBD0u;
    // 0x22fbd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22FBD0u, 0x22FBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FBD8u;
label_22fbd8:
    // 0x22fbd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22fbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22fbdc:
    // 0x22fbdc: 0xc0a30ec  jal         func_28C3B0
label_22fbe0:
    if (ctx->pc == 0x22FBE0u) {
        ctx->pc = 0x22FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBDCu;
        // 0x22fbe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBE4u;
        goto label_22fbe4;
    }
    ctx->pc = 0x22FBDCu;
    SET_GPR_U32(ctx, 31, 0x22FBE4u);
    ctx->pc = 0x22FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBDCu;
    // 0x22fbe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C3B0u, 0x22FBDCu, 0x22FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FBE4u;
label_22fbe4:
    // 0x22fbe4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22fbe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22fbe8:
    // 0x22fbe8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22fbe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22fbec:
    // 0x22fbec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22fbecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22fbf0:
    // 0x22fbf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22fbf4:
    // 0x22fbf4: 0x3e00008  jr          $ra
label_22fbf8:
    if (ctx->pc == 0x22FBF8u) {
        ctx->pc = 0x22FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBF4u;
        // 0x22fbf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBFCu;
        goto label_22fbfc;
    }
    ctx->pc = 0x22FBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBF4u;
        // 0x22fbf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FBFCu;
label_22fbfc:
    // 0x22fbfc: 0x0  nop
    ctx->pc = 0x22fbfcu;
    // NOP
    ctx->pc = 0x22fc00u;
}
