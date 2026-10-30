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

// Function: sub_001EAA30
// Address: 0x1eaa30 - 0x1eabb8
void sub_001EAA30_0x1eaa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAA30_0x1eaa30");
#endif

    switch (ctx->pc) {
        case 0x1eaa30u: goto label_1eaa30;
        case 0x1eaa34u: goto label_1eaa34;
        case 0x1eaa38u: goto label_1eaa38;
        case 0x1eaa3cu: goto label_1eaa3c;
        case 0x1eaa40u: goto label_1eaa40;
        case 0x1eaa44u: goto label_1eaa44;
        case 0x1eaa48u: goto label_1eaa48;
        case 0x1eaa4cu: goto label_1eaa4c;
        case 0x1eaa50u: goto label_1eaa50;
        case 0x1eaa54u: goto label_1eaa54;
        case 0x1eaa58u: goto label_1eaa58;
        case 0x1eaa5cu: goto label_1eaa5c;
        case 0x1eaa60u: goto label_1eaa60;
        case 0x1eaa64u: goto label_1eaa64;
        case 0x1eaa68u: goto label_1eaa68;
        case 0x1eaa6cu: goto label_1eaa6c;
        case 0x1eaa70u: goto label_1eaa70;
        case 0x1eaa74u: goto label_1eaa74;
        case 0x1eaa78u: goto label_1eaa78;
        case 0x1eaa7cu: goto label_1eaa7c;
        case 0x1eaa80u: goto label_1eaa80;
        case 0x1eaa84u: goto label_1eaa84;
        case 0x1eaa88u: goto label_1eaa88;
        case 0x1eaa8cu: goto label_1eaa8c;
        case 0x1eaa90u: goto label_1eaa90;
        case 0x1eaa94u: goto label_1eaa94;
        case 0x1eaa98u: goto label_1eaa98;
        case 0x1eaa9cu: goto label_1eaa9c;
        case 0x1eaaa0u: goto label_1eaaa0;
        case 0x1eaaa4u: goto label_1eaaa4;
        case 0x1eaaa8u: goto label_1eaaa8;
        case 0x1eaaacu: goto label_1eaaac;
        case 0x1eaab0u: goto label_1eaab0;
        case 0x1eaab4u: goto label_1eaab4;
        case 0x1eaab8u: goto label_1eaab8;
        case 0x1eaabcu: goto label_1eaabc;
        case 0x1eaac0u: goto label_1eaac0;
        case 0x1eaac4u: goto label_1eaac4;
        case 0x1eaac8u: goto label_1eaac8;
        case 0x1eaaccu: goto label_1eaacc;
        case 0x1eaad0u: goto label_1eaad0;
        case 0x1eaad4u: goto label_1eaad4;
        case 0x1eaad8u: goto label_1eaad8;
        case 0x1eaadcu: goto label_1eaadc;
        case 0x1eaae0u: goto label_1eaae0;
        case 0x1eaae4u: goto label_1eaae4;
        case 0x1eaae8u: goto label_1eaae8;
        case 0x1eaaecu: goto label_1eaaec;
        case 0x1eaaf0u: goto label_1eaaf0;
        case 0x1eaaf4u: goto label_1eaaf4;
        case 0x1eaaf8u: goto label_1eaaf8;
        case 0x1eaafcu: goto label_1eaafc;
        case 0x1eab00u: goto label_1eab00;
        case 0x1eab04u: goto label_1eab04;
        case 0x1eab08u: goto label_1eab08;
        case 0x1eab0cu: goto label_1eab0c;
        case 0x1eab10u: goto label_1eab10;
        case 0x1eab14u: goto label_1eab14;
        case 0x1eab18u: goto label_1eab18;
        case 0x1eab1cu: goto label_1eab1c;
        case 0x1eab20u: goto label_1eab20;
        case 0x1eab24u: goto label_1eab24;
        case 0x1eab28u: goto label_1eab28;
        case 0x1eab2cu: goto label_1eab2c;
        case 0x1eab30u: goto label_1eab30;
        case 0x1eab34u: goto label_1eab34;
        case 0x1eab38u: goto label_1eab38;
        case 0x1eab3cu: goto label_1eab3c;
        case 0x1eab40u: goto label_1eab40;
        case 0x1eab44u: goto label_1eab44;
        case 0x1eab48u: goto label_1eab48;
        case 0x1eab4cu: goto label_1eab4c;
        case 0x1eab50u: goto label_1eab50;
        case 0x1eab54u: goto label_1eab54;
        case 0x1eab58u: goto label_1eab58;
        case 0x1eab5cu: goto label_1eab5c;
        case 0x1eab60u: goto label_1eab60;
        case 0x1eab64u: goto label_1eab64;
        case 0x1eab68u: goto label_1eab68;
        case 0x1eab6cu: goto label_1eab6c;
        case 0x1eab70u: goto label_1eab70;
        case 0x1eab74u: goto label_1eab74;
        case 0x1eab78u: goto label_1eab78;
        case 0x1eab7cu: goto label_1eab7c;
        case 0x1eab80u: goto label_1eab80;
        case 0x1eab84u: goto label_1eab84;
        case 0x1eab88u: goto label_1eab88;
        case 0x1eab8cu: goto label_1eab8c;
        case 0x1eab90u: goto label_1eab90;
        case 0x1eab94u: goto label_1eab94;
        case 0x1eab98u: goto label_1eab98;
        case 0x1eab9cu: goto label_1eab9c;
        case 0x1eaba0u: goto label_1eaba0;
        case 0x1eaba4u: goto label_1eaba4;
        case 0x1eaba8u: goto label_1eaba8;
        case 0x1eabacu: goto label_1eabac;
        case 0x1eabb0u: goto label_1eabb0;
        case 0x1eabb4u: goto label_1eabb4;
        default: break;
    }

    ctx->pc = 0x1eaa30u;

label_1eaa30:
    // 0x1eaa30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1eaa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1eaa34:
    // 0x1eaa34: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1eaa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1eaa38:
    // 0x1eaa38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eaa38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eaa3c:
    // 0x1eaa3c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1eaa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1eaa40:
    // 0x1eaa40: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1eaa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1eaa44:
    // 0x1eaa44: 0x2622ff9b  addiu       $v0, $s1, -0x65
    ctx->pc = 0x1eaa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967195));
label_1eaa48:
    // 0x1eaa48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1eaa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1eaa4c:
    // 0x1eaa4c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1eaa4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eaa50:
    // 0x1eaa50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eaa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1eaa54:
    // 0x1eaa54: 0x2c420063  sltiu       $v0, $v0, 0x63
    ctx->pc = 0x1eaa54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
label_1eaa58:
    // 0x1eaa58: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_1eaa5c:
    if (ctx->pc == 0x1EAA5Cu) {
        ctx->pc = 0x1EAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA58u;
        // 0x1eaa5c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA60u;
        goto label_1eaa60;
    }
    ctx->pc = 0x1EAA58u;
    {
        const bool branch_taken_0x1eaa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA58u;
        // 0x1eaa5c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa58) {
            ctx->pc = 0x1EAB98u;
            goto label_1eab98;
        }
    }
    ctx->pc = 0x1EAA60u;
label_1eaa60:
    // 0x1eaa60: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1eaa60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1eaa64:
    // 0x1eaa64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1eaa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eaa68:
    // 0x1eaa68: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1eaa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_1eaa6c:
    // 0x1eaa6c: 0xc10904c  jal         func_424130
label_1eaa70:
    if (ctx->pc == 0x1EAA70u) {
        ctx->pc = 0x1EAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA6Cu;
        // 0x1eaa70: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA74u;
        goto label_1eaa74;
    }
    ctx->pc = 0x1EAA6Cu;
    SET_GPR_U32(ctx, 31, 0x1EAA74u);
    ctx->pc = 0x1EAA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA6Cu;
    // 0x1eaa70: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EAA6Cu, 0x1EAA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA74u;
label_1eaa74:
    // 0x1eaa74: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_1eaa78:
    if (ctx->pc == 0x1EAA78u) {
        ctx->pc = 0x1EAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA74u;
        // 0x1eaa78: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA7Cu;
        goto label_1eaa7c;
    }
    ctx->pc = 0x1EAA74u;
    {
        const bool branch_taken_0x1eaa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA74u;
        // 0x1eaa78: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa74) {
            ctx->pc = 0x1EAB98u;
            goto label_1eab98;
        }
    }
    ctx->pc = 0x1EAA7Cu;
label_1eaa7c:
    // 0x1eaa7c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1eaa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eaa80:
    // 0x1eaa80: 0x9444eec2  lhu         $a0, -0x113E($v0)
    ctx->pc = 0x1eaa80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962882)));
label_1eaa84:
    // 0x1eaa84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1eaa84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eaa88:
    // 0x1eaa88: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_1eaa8c:
    if (ctx->pc == 0x1EAA8Cu) {
        ctx->pc = 0x1EAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA88u;
        // 0x1eaa8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA90u;
        goto label_1eaa90;
    }
    ctx->pc = 0x1EAA88u;
    {
        const bool branch_taken_0x1eaa88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA88u;
        // 0x1eaa8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa88) {
            ctx->pc = 0x1EAAC8u;
            goto label_1eaac8;
        }
    }
    ctx->pc = 0x1EAA90u;
label_1eaa90:
    // 0x1eaa90: 0x50a4000d  beql        $a1, $a0, . + 4 + (0xD << 2)
label_1eaa94:
    if (ctx->pc == 0x1EAA94u) {
        ctx->pc = 0x1EAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA90u;
        // 0x1eaa94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA98u;
        goto label_1eaa98;
    }
    ctx->pc = 0x1EAA90u;
    {
        const bool branch_taken_0x1eaa90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1eaa90) {
            ctx->pc = 0x1EAA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAA90u;
            // 0x1eaa94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAAC8u;
            goto label_1eaac8;
        }
    }
    ctx->pc = 0x1EAA98u;
label_1eaa98:
    // 0x1eaa98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eaa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1eaa9c:
    // 0x1eaa9c: 0x0  nop
    ctx->pc = 0x1eaa9cu;
    // NOP
label_1eaaa0:
    // 0x1eaaa0: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x1eaaa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1eaaa4:
    // 0x1eaaa4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1eaaa8:
    if (ctx->pc == 0x1EAAA8u) {
        ctx->pc = 0x1EAAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAA4u;
        // 0x1eaaa8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAAACu;
        goto label_1eaaac;
    }
    ctx->pc = 0x1EAAA4u;
    {
        const bool branch_taken_0x1eaaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAA4u;
        // 0x1eaaa8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaaa4) {
            ctx->pc = 0x1EAAC8u;
            goto label_1eaac8;
        }
    }
    ctx->pc = 0x1EAAACu;
label_1eaaac:
    // 0x1eaaac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1eaaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1eaab0:
    // 0x1eaab0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eaab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eaab4:
    // 0x1eaab4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1eaab8:
    if (ctx->pc == 0x1EAAB8u) {
        ctx->pc = 0x1EAABCu;
        goto label_1eaabc;
    }
    ctx->pc = 0x1EAAB4u;
    {
        const bool branch_taken_0x1eaab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaab4) {
            ctx->pc = 0x1EAAC8u;
            goto label_1eaac8;
        }
    }
    ctx->pc = 0x1EAABCu;
label_1eaabc:
    // 0x1eaabc: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
label_1eaac0:
    if (ctx->pc == 0x1EAAC0u) {
        ctx->pc = 0x1EAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAABCu;
        // 0x1eaac0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAAC4u;
        goto label_1eaac4;
    }
    ctx->pc = 0x1EAABCu;
    {
        const bool branch_taken_0x1eaabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1eaabc) {
            ctx->pc = 0x1EAAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAABCu;
            // 0x1eaac0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eaaa0;
        }
    }
    ctx->pc = 0x1EAAC4u;
label_1eaac4:
    // 0x1eaac4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eaac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eaac8:
    // 0x1eaac8: 0x14c00034  bnez        $a2, . + 4 + (0x34 << 2)
label_1eaacc:
    if (ctx->pc == 0x1EAACCu) {
        ctx->pc = 0x1EAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAC8u;
        // 0x1eaacc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAAD0u;
        goto label_1eaad0;
    }
    ctx->pc = 0x1EAAC8u;
    {
        const bool branch_taken_0x1eaac8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAC8u;
        // 0x1eaacc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaac8) {
            ctx->pc = 0x1EAB9Cu;
            goto label_1eab9c;
        }
    }
    ctx->pc = 0x1EAAD0u;
label_1eaad0:
    // 0x1eaad0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1eaad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1eaad4:
    // 0x1eaad4: 0x8c42489c  lw          $v0, 0x489C($v0)
    ctx->pc = 0x1eaad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1eaad8:
    // 0x1eaad8: 0x8c4456d4  lw          $a0, 0x56D4($v0)
    ctx->pc = 0x1eaad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22228)));
label_1eaadc:
    // 0x1eaadc: 0x1080002e  beqz        $a0, . + 4 + (0x2E << 2)
label_1eaae0:
    if (ctx->pc == 0x1EAAE0u) {
        ctx->pc = 0x1EAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAADCu;
        // 0x1eaae0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAAE4u;
        goto label_1eaae4;
    }
    ctx->pc = 0x1EAADCu;
    {
        const bool branch_taken_0x1eaadc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAADCu;
        // 0x1eaae0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaadc) {
            ctx->pc = 0x1EAB98u;
            goto label_1eab98;
        }
    }
    ctx->pc = 0x1EAAE4u;
label_1eaae4:
    // 0x1eaae4: 0x244314d8  addiu       $v1, $v0, 0x14D8
    ctx->pc = 0x1eaae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5336));
label_1eaae8:
    // 0x1eaae8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1eaae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1eaaec:
    // 0x1eaaec: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1eaaecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1eaaf0:
    // 0x1eaaf0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1eaaf0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1eaaf4:
    // 0x1eaaf4: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x1eaaf4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_1eaaf8:
    // 0x1eaaf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1eaaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1eaafc:
    // 0x1eaafc: 0x54510023  bnel        $v0, $s1, . + 4 + (0x23 << 2)
label_1eab00:
    if (ctx->pc == 0x1EAB00u) {
        ctx->pc = 0x1EAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAFCu;
        // 0x1eab00: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB04u;
        goto label_1eab04;
    }
    ctx->pc = 0x1EAAFCu;
    {
        const bool branch_taken_0x1eaafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1eaafc) {
            ctx->pc = 0x1EAB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAAFCu;
            // 0x1eab00: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAB8Cu;
            goto label_1eab8c;
        }
    }
    ctx->pc = 0x1EAB04u;
label_1eab04:
    // 0x1eab04: 0x8ccc27e4  lw          $t4, 0x27E4($a2)
    ctx->pc = 0x1eab04u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10212)));
label_1eab08:
    // 0x1eab08: 0x24a56cd0  addiu       $a1, $a1, 0x6CD0
    ctx->pc = 0x1eab08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27856));
label_1eab0c:
    // 0x1eab0c: 0x25086ce8  addiu       $t0, $t0, 0x6CE8
    ctx->pc = 0x1eab0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27880));
label_1eab10:
    // 0x1eab10: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1eab10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1eab14:
    // 0x1eab14: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1eab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1eab18:
    // 0x1eab18: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1eab18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eab1c:
    // 0x1eab1c: 0x24090055  addiu       $t1, $zero, 0x55
    ctx->pc = 0x1eab1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_1eab20:
    // 0x1eab20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1eab20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eab24:
    // 0x1eab24: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1eab24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1eab28:
    // 0x1eab28: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eab28u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eab2c:
    // 0x1eab2c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1eab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1eab30:
    // 0x1eab30: 0x40f809  jalr        $v0
label_1eab34:
    if (ctx->pc == 0x1EAB34u) {
        ctx->pc = 0x1EAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB30u;
        // 0x1eab34: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB38u;
        goto label_1eab38;
    }
    ctx->pc = 0x1EAB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EAB38u);
        ctx->pc = 0x1EAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB30u;
        // 0x1eab34: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAB30u, 0x1EAB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAB38u;
label_1eab38:
    // 0x1eab38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1eab3c:
    if (ctx->pc == 0x1EAB3Cu) {
        ctx->pc = 0x1EAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB38u;
        // 0x1eab3c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB40u;
        goto label_1eab40;
    }
    ctx->pc = 0x1EAB38u;
    {
        const bool branch_taken_0x1eab38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB38u;
        // 0x1eab3c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab38) {
            ctx->pc = 0x1EAB4Cu;
            goto label_1eab4c;
        }
    }
    ctx->pc = 0x1EAB40u;
label_1eab40:
    // 0x1eab40: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1eab40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_1eab44:
    // 0x1eab44: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x1eab44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
label_1eab48:
    // 0x1eab48: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1eab48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1eab4c:
    // 0x1eab4c: 0x8e44ee40  lw          $a0, -0x11C0($s2)
    ctx->pc = 0x1eab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962752)));
label_1eab50:
    // 0x1eab50: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1eab50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1eab54:
    // 0x1eab54: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1eab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1eab58:
    // 0x1eab58: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_1eab5c:
    if (ctx->pc == 0x1EAB5Cu) {
        ctx->pc = 0x1EAB60u;
        goto label_1eab60;
    }
    ctx->pc = 0x1EAB58u;
    {
        const bool branch_taken_0x1eab58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1eab58) {
            ctx->pc = 0x1EAB7Cu;
            goto label_1eab7c;
        }
    }
    ctx->pc = 0x1EAB60u;
label_1eab60:
    // 0x1eab60: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1eab64:
    if (ctx->pc == 0x1EAB64u) {
        ctx->pc = 0x1EAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB60u;
        // 0x1eab64: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB68u;
        goto label_1eab68;
    }
    ctx->pc = 0x1EAB60u;
    {
        const bool branch_taken_0x1eab60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB60u;
        // 0x1eab64: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab60) {
            ctx->pc = 0x1EAB6Cu;
            goto label_1eab6c;
        }
    }
    ctx->pc = 0x1EAB68u;
label_1eab68:
    // 0x1eab68: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1eab68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1eab6c:
    // 0x1eab6c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1eab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1eab70:
    // 0x1eab70: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1eab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1eab74:
    // 0x1eab74: 0x10000008  b           . + 4 + (0x8 << 2)
label_1eab78:
    if (ctx->pc == 0x1EAB78u) {
        ctx->pc = 0x1EAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB74u;
        // 0x1eab78: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB7Cu;
        goto label_1eab7c;
    }
    ctx->pc = 0x1EAB74u;
    {
        const bool branch_taken_0x1eab74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB74u;
        // 0x1eab78: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab74) {
            ctx->pc = 0x1EAB98u;
            goto label_1eab98;
        }
    }
    ctx->pc = 0x1EAB7Cu;
label_1eab7c:
    // 0x1eab7c: 0xc13a5f0  jal         func_4E97C0
label_1eab80:
    if (ctx->pc == 0x1EAB80u) {
        ctx->pc = 0x1EAB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB7Cu;
        // 0x1eab80: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB84u;
        goto label_1eab84;
    }
    ctx->pc = 0x1EAB7Cu;
    SET_GPR_U32(ctx, 31, 0x1EAB84u);
    ctx->pc = 0x1EAB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB7Cu;
    // 0x1eab80: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E97C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E97C0u, 0x1EAB7Cu, 0x1EAB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB84u;
label_1eab84:
    // 0x1eab84: 0x10000005  b           . + 4 + (0x5 << 2)
label_1eab88:
    if (ctx->pc == 0x1EAB88u) {
        ctx->pc = 0x1EAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB84u;
        // 0x1eab88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB8Cu;
        goto label_1eab8c;
    }
    ctx->pc = 0x1EAB84u;
    {
        const bool branch_taken_0x1eab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB84u;
        // 0x1eab88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab84) {
            ctx->pc = 0x1EAB9Cu;
            goto label_1eab9c;
        }
    }
    ctx->pc = 0x1EAB8Cu;
label_1eab8c:
    // 0x1eab8c: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x1eab8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1eab90:
    // 0x1eab90: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_1eab94:
    if (ctx->pc == 0x1EAB94u) {
        ctx->pc = 0x1EAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB90u;
        // 0x1eab94: 0x24630084  addiu       $v1, $v1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB98u;
        goto label_1eab98;
    }
    ctx->pc = 0x1EAB90u;
    {
        const bool branch_taken_0x1eab90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB90u;
        // 0x1eab94: 0x24630084  addiu       $v1, $v1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab90) {
            ctx->pc = 0x1EAAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eaaf8;
        }
    }
    ctx->pc = 0x1EAB98u;
label_1eab98:
    // 0x1eab98: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1eab98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1eab9c:
    // 0x1eab9c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1eab9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1eaba0:
    // 0x1eaba0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1eaba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1eaba4:
    // 0x1eaba4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1eaba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eaba8:
    // 0x1eaba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eaba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eabac:
    // 0x1eabac: 0x3e00008  jr          $ra
label_1eabb0:
    if (ctx->pc == 0x1EABB0u) {
        ctx->pc = 0x1EABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABACu;
        // 0x1eabb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EABB4u;
        goto label_1eabb4;
    }
    ctx->pc = 0x1EABACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABACu;
        // 0x1eabb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EABACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EABB4u;
label_1eabb4:
    // 0x1eabb4: 0x0  nop
    ctx->pc = 0x1eabb4u;
    // NOP
    ctx->pc = 0x1eabb8u;
}
