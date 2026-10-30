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

// Function: sub_00324C80
// Address: 0x324c80 - 0x324d90
void sub_00324C80_0x324c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324C80_0x324c80");
#endif

    switch (ctx->pc) {
        case 0x324ca0u: goto label_324ca0;
        case 0x324cb0u: goto label_324cb0;
        case 0x324cbcu: goto label_324cbc;
        case 0x324cd8u: goto label_324cd8;
        case 0x324ce4u: goto label_324ce4;
        case 0x324cf4u: goto label_324cf4;
        case 0x324d0cu: goto label_324d0c;
        case 0x324d34u: goto label_324d34;
        case 0x324d40u: goto label_324d40;
        case 0x324d4cu: goto label_324d4c;
        case 0x324d5cu: goto label_324d5c;
        case 0x324d68u: goto label_324d68;
        case 0x324d78u: goto label_324d78;
        default: break;
    }

    ctx->pc = 0x324c80u;

    // 0x324c80: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x324c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x324c84: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x324c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x324c88: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x324c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x324c8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x324c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324c90: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x324c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x324c94: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x324c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x324c98: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x324C98u;
    SET_GPR_U32(ctx, 31, 0x324CA0u);
    ctx->pc = 0x324C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324C98u;
    // 0x324c9c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x324C98u, 0x324CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CA0u;
label_324ca0:
    // 0x324ca0: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x324ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x324ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ca8: 0xc0c8eb4  jal         func_323AD0
    ctx->pc = 0x324CA8u;
    SET_GPR_U32(ctx, 31, 0x324CB0u);
    ctx->pc = 0x324CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324CA8u;
    // 0x324cac: 0x24a548c0  addiu       $a1, $a1, 0x48C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AD0u, 0x324CA8u, 0x324CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CB0u;
label_324cb0:
    // 0x324cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324cb4: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x324CB4u;
    SET_GPR_U32(ctx, 31, 0x324CBCu);
    ctx->pc = 0x324CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324CB4u;
    // 0x324cb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x324CB4u, 0x324CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CBCu;
label_324cbc:
    // 0x324cbc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x324cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x324cc0: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x324CC0u;
    {
        const bool branch_taken_0x324cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x324CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CC0u;
        // 0x324cc4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324cc0) {
            ctx->pc = 0x324D7Cu;
            goto label_324d7c;
        }
    }
    ctx->pc = 0x324CC8u;
    // 0x324cc8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x324cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x324ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324cd0: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x324CD0u;
    SET_GPR_U32(ctx, 31, 0x324CD8u);
    ctx->pc = 0x324CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324CD0u;
    // 0x324cd4: 0x24a548c8  addiu       $a1, $a1, 0x48C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x324CD0u, 0x324CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CD8u;
label_324cd8:
    // 0x324cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324cdc: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x324CDCu;
    SET_GPR_U32(ctx, 31, 0x324CE4u);
    ctx->pc = 0x324CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324CDCu;
    // 0x324ce0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x324CDCu, 0x324CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CE4u;
label_324ce4:
    // 0x324ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x324ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324cec: 0xc0c9ee2  jal         func_327B88
    ctx->pc = 0x324CECu;
    SET_GPR_U32(ctx, 31, 0x324CF4u);
    ctx->pc = 0x324CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324CECu;
    // 0x324cf0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327B88u, 0x324CECu, 0x324CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CF4u;
label_324cf4:
    // 0x324cf4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x324CF4u;
    {
        const bool branch_taken_0x324cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CF4u;
        // 0x324cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324cf4) {
            ctx->pc = 0x324D4Cu;
            goto label_324d4c;
        }
    }
    ctx->pc = 0x324CFCu;
    // 0x324cfc: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x324cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x324d00: 0x24a548d0  addiu       $a1, $a1, 0x48D0
    ctx->pc = 0x324d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18640));
    // 0x324d04: 0xc0ca002  jal         func_328008
    ctx->pc = 0x324D04u;
    SET_GPR_U32(ctx, 31, 0x324D0Cu);
    ctx->pc = 0x324D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D04u;
    // 0x324d08: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328008u, 0x324D04u, 0x324D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D0Cu;
label_324d0c:
    // 0x324d0c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x324d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x324d10: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x324D10u;
    {
        const bool branch_taken_0x324d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D10u;
        // 0x324d14: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d10) {
            ctx->pc = 0x324D4Cu;
            goto label_324d4c;
        }
    }
    ctx->pc = 0x324D18u;
    // 0x324d18: 0x18e0000c  blez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x324D18u;
    {
        const bool branch_taken_0x324d18 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x324D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D18u;
        // 0x324d1c: 0x27b00060  addiu       $s0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d18) {
            ctx->pc = 0x324D4Cu;
            goto label_324d4c;
        }
    }
    ctx->pc = 0x324D20u;
    // 0x324d20: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x324d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x324d24: 0x24a548d8  addiu       $a1, $a1, 0x48D8
    ctx->pc = 0x324d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18648));
    // 0x324d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d2c: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x324D2Cu;
    SET_GPR_U32(ctx, 31, 0x324D34u);
    ctx->pc = 0x324D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D2Cu;
    // 0x324d30: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x324D2Cu, 0x324D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D34u;
label_324d34:
    // 0x324d34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x324d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d38: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x324D38u;
    SET_GPR_U32(ctx, 31, 0x324D40u);
    ctx->pc = 0x324D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D38u;
    // 0x324d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x324D38u, 0x324D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D40u;
label_324d40:
    // 0x324d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d44: 0xc0c90f6  jal         func_3243D8
    ctx->pc = 0x324D44u;
    SET_GPR_U32(ctx, 31, 0x324D4Cu);
    ctx->pc = 0x324D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D44u;
    // 0x324d48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3243D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3243D8u, 0x324D44u, 0x324D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D4Cu;
label_324d4c:
    // 0x324d4c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x324d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x324d50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d54: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x324D54u;
    SET_GPR_U32(ctx, 31, 0x324D5Cu);
    ctx->pc = 0x324D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D54u;
    // 0x324d58: 0x24a548f0  addiu       $a1, $a1, 0x48F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x324D54u, 0x324D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D5Cu;
label_324d5c:
    // 0x324d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d60: 0xc0c90f6  jal         func_3243D8
    ctx->pc = 0x324D60u;
    SET_GPR_U32(ctx, 31, 0x324D68u);
    ctx->pc = 0x324D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D60u;
    // 0x324d64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3243D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3243D8u, 0x324D60u, 0x324D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D68u;
label_324d68:
    // 0x324d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x324d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324d70: 0xc0c9048  jal         func_324120
    ctx->pc = 0x324D70u;
    SET_GPR_U32(ctx, 31, 0x324D78u);
    ctx->pc = 0x324D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D70u;
    // 0x324d74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324120u, 0x324D70u, 0x324D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D78u;
label_324d78:
    // 0x324d78: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x324d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_324d7c:
    // 0x324d7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x324d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d80: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x324d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x324d84: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x324d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x324d88: 0x3e00008  jr          $ra
    ctx->pc = 0x324D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D88u;
        // 0x324d8c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324D90u;
}
