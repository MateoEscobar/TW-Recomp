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

// Function: sub_0047F998
// Address: 0x47f998 - 0x47fac8
void sub_0047F998_0x47f998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F998_0x47f998");
#endif

    switch (ctx->pc) {
        case 0x47f998u: goto label_47f998;
        case 0x47f99cu: goto label_47f99c;
        case 0x47f9a0u: goto label_47f9a0;
        case 0x47f9a4u: goto label_47f9a4;
        case 0x47f9a8u: goto label_47f9a8;
        case 0x47f9acu: goto label_47f9ac;
        case 0x47f9b0u: goto label_47f9b0;
        case 0x47f9b4u: goto label_47f9b4;
        case 0x47f9b8u: goto label_47f9b8;
        case 0x47f9bcu: goto label_47f9bc;
        case 0x47f9c0u: goto label_47f9c0;
        case 0x47f9c4u: goto label_47f9c4;
        case 0x47f9c8u: goto label_47f9c8;
        case 0x47f9ccu: goto label_47f9cc;
        case 0x47f9d0u: goto label_47f9d0;
        case 0x47f9d4u: goto label_47f9d4;
        case 0x47f9d8u: goto label_47f9d8;
        case 0x47f9dcu: goto label_47f9dc;
        case 0x47f9e0u: goto label_47f9e0;
        case 0x47f9e4u: goto label_47f9e4;
        case 0x47f9e8u: goto label_47f9e8;
        case 0x47f9ecu: goto label_47f9ec;
        case 0x47f9f0u: goto label_47f9f0;
        case 0x47f9f4u: goto label_47f9f4;
        case 0x47f9f8u: goto label_47f9f8;
        case 0x47f9fcu: goto label_47f9fc;
        case 0x47fa00u: goto label_47fa00;
        case 0x47fa04u: goto label_47fa04;
        case 0x47fa08u: goto label_47fa08;
        case 0x47fa0cu: goto label_47fa0c;
        case 0x47fa10u: goto label_47fa10;
        case 0x47fa14u: goto label_47fa14;
        case 0x47fa18u: goto label_47fa18;
        case 0x47fa1cu: goto label_47fa1c;
        case 0x47fa20u: goto label_47fa20;
        case 0x47fa24u: goto label_47fa24;
        case 0x47fa28u: goto label_47fa28;
        case 0x47fa2cu: goto label_47fa2c;
        case 0x47fa30u: goto label_47fa30;
        case 0x47fa34u: goto label_47fa34;
        case 0x47fa38u: goto label_47fa38;
        case 0x47fa3cu: goto label_47fa3c;
        case 0x47fa40u: goto label_47fa40;
        case 0x47fa44u: goto label_47fa44;
        case 0x47fa48u: goto label_47fa48;
        case 0x47fa4cu: goto label_47fa4c;
        case 0x47fa50u: goto label_47fa50;
        case 0x47fa54u: goto label_47fa54;
        case 0x47fa58u: goto label_47fa58;
        case 0x47fa5cu: goto label_47fa5c;
        case 0x47fa60u: goto label_47fa60;
        case 0x47fa64u: goto label_47fa64;
        case 0x47fa68u: goto label_47fa68;
        case 0x47fa6cu: goto label_47fa6c;
        case 0x47fa70u: goto label_47fa70;
        case 0x47fa74u: goto label_47fa74;
        case 0x47fa78u: goto label_47fa78;
        case 0x47fa7cu: goto label_47fa7c;
        case 0x47fa80u: goto label_47fa80;
        case 0x47fa84u: goto label_47fa84;
        case 0x47fa88u: goto label_47fa88;
        case 0x47fa8cu: goto label_47fa8c;
        case 0x47fa90u: goto label_47fa90;
        case 0x47fa94u: goto label_47fa94;
        case 0x47fa98u: goto label_47fa98;
        case 0x47fa9cu: goto label_47fa9c;
        case 0x47faa0u: goto label_47faa0;
        case 0x47faa4u: goto label_47faa4;
        case 0x47faa8u: goto label_47faa8;
        case 0x47faacu: goto label_47faac;
        case 0x47fab0u: goto label_47fab0;
        case 0x47fab4u: goto label_47fab4;
        case 0x47fab8u: goto label_47fab8;
        case 0x47fabcu: goto label_47fabc;
        case 0x47fac0u: goto label_47fac0;
        case 0x47fac4u: goto label_47fac4;
        default: break;
    }

    ctx->pc = 0x47f998u;

label_47f998:
    // 0x47f998: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x47f998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_47f99c:
    // 0x47f99c: 0x8f848948  lw          $a0, -0x76B8($gp)
    ctx->pc = 0x47f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936904)));
label_47f9a0:
    // 0x47f9a0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x47f9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_47f9a4:
    // 0x47f9a4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x47f9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_47f9a8:
    // 0x47f9a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x47f9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_47f9ac:
    // 0x47f9ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47f9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47f9b0:
    // 0x47f9b0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x47f9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_47f9b4:
    // 0x47f9b4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x47f9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_47f9b8:
    // 0x47f9b8: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
label_47f9bc:
    if (ctx->pc == 0x47F9BCu) {
        ctx->pc = 0x47F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F9B8u;
        // 0x47f9bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F9C0u;
        goto label_47f9c0;
    }
    ctx->pc = 0x47F9B8u;
    {
        const bool branch_taken_0x47f9b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F9B8u;
        // 0x47f9bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f9b8) {
            ctx->pc = 0x47FAA0u;
            goto label_47faa0;
        }
    }
    ctx->pc = 0x47F9C0u;
label_47f9c0:
    // 0x47f9c0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x47f9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_47f9c4:
    // 0x47f9c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x47f9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47f9c8:
    // 0x47f9c8: 0xc11f7ce  jal         func_47DF38
label_47f9cc:
    if (ctx->pc == 0x47F9CCu) {
        ctx->pc = 0x47F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F9C8u;
        // 0x47f9cc: 0x24a5ffa0  addiu       $a1, $a1, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F9D0u;
        goto label_47f9d0;
    }
    ctx->pc = 0x47F9C8u;
    SET_GPR_U32(ctx, 31, 0x47F9D0u);
    ctx->pc = 0x47F9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F9C8u;
    // 0x47f9cc: 0x24a5ffa0  addiu       $a1, $a1, -0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DF38u, 0x47F9C8u, 0x47F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F9D0u;
label_47f9d0:
    // 0x47f9d0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47f9d4:
    // 0x47f9d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x47f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_47f9d8:
    // 0x47f9d8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x47f9d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_47f9dc:
    // 0x47f9dc: 0x2442db70  addiu       $v0, $v0, -0x2490
    ctx->pc = 0x47f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957936));
label_47f9e0:
    // 0x47f9e0: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x47f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_47f9e4:
    // 0x47f9e4: 0x8c640118  lw          $a0, 0x118($v1)
    ctx->pc = 0x47f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_47f9e8:
    // 0x47f9e8: 0x1082002a  beq         $a0, $v0, . + 4 + (0x2A << 2)
label_47f9ec:
    if (ctx->pc == 0x47F9ECu) {
        ctx->pc = 0x47F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F9E8u;
        // 0x47f9ec: 0x8f828600  lw          $v0, -0x7A00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F9F0u;
        goto label_47f9f0;
    }
    ctx->pc = 0x47F9E8u;
    {
        const bool branch_taken_0x47f9e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x47F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F9E8u;
        // 0x47f9ec: 0x8f828600  lw          $v0, -0x7A00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f9e8) {
            ctx->pc = 0x47FA94u;
            goto label_47fa94;
        }
    }
    ctx->pc = 0x47F9F0u;
label_47f9f0:
    // 0x47f9f0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47f9f4:
    if (ctx->pc == 0x47F9F4u) {
        ctx->pc = 0x47F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F9F0u;
        // 0x47f9f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F9F8u;
        goto label_47f9f8;
    }
    ctx->pc = 0x47F9F0u;
    {
        const bool branch_taken_0x47f9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F9F0u;
        // 0x47f9f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f9f0) {
            ctx->pc = 0x47FA78u;
            goto label_47fa78;
        }
    }
    ctx->pc = 0x47F9F8u;
label_47f9f8:
    // 0x47f9f8: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x47f9f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_47f9fc:
    // 0x47f9fc: 0x8f8485fc  lw          $a0, -0x7A04($gp)
    ctx->pc = 0x47f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
label_47fa00:
    // 0x47fa00: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x47fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_47fa04:
    // 0x47fa04: 0x24b30001  addiu       $s3, $a1, 0x1
    ctx->pc = 0x47fa04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_47fa08:
    // 0x47fa08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x47fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_47fa0c:
    // 0x47fa0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x47fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47fa10:
    // 0x47fa10: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x47fa10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_47fa14:
    // 0x47fa14: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_47fa18:
    if (ctx->pc == 0x47FA18u) {
        ctx->pc = 0x47FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA14u;
        // 0x47fa18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FA1Cu;
        goto label_47fa1c;
    }
    ctx->pc = 0x47FA14u;
    {
        const bool branch_taken_0x47fa14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA14u;
        // 0x47fa18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fa14) {
            ctx->pc = 0x47FA40u;
            goto label_47fa40;
        }
    }
    ctx->pc = 0x47FA1Cu;
label_47fa1c:
    // 0x47fa1c: 0x8e110038  lw          $s1, 0x38($s0)
    ctx->pc = 0x47fa1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_47fa20:
    // 0x47fa20: 0x2692ad18  addiu       $s2, $s4, -0x52E8
    ctx->pc = 0x47fa20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
label_47fa24:
    // 0x47fa24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47fa24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47fa28:
    // 0x47fa28: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x47fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_47fa2c:
    // 0x47fa2c: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x47fa2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_47fa30:
    // 0x47fa30: 0x40f809  jalr        $v0
label_47fa34:
    if (ctx->pc == 0x47FA34u) {
        ctx->pc = 0x47FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA30u;
        // 0x47fa34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FA38u;
        goto label_47fa38;
    }
    ctx->pc = 0x47FA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47FA38u);
        ctx->pc = 0x47FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA30u;
        // 0x47fa34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FA30u, 0x47FA38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47FA38u;
label_47fa38:
    // 0x47fa38: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_47fa3c:
    if (ctx->pc == 0x47FA3Cu) {
        ctx->pc = 0x47FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA38u;
        // 0x47fa3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FA40u;
        goto label_47fa40;
    }
    ctx->pc = 0x47FA38u;
    {
        const bool branch_taken_0x47fa38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x47FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA38u;
        // 0x47fa3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fa38) {
            ctx->pc = 0x47FA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47fa28;
        }
    }
    ctx->pc = 0x47FA40u;
label_47fa40:
    // 0x47fa40: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_47fa44:
    if (ctx->pc == 0x47FA44u) {
        ctx->pc = 0x47FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA40u;
        // 0x47fa44: 0x8f828600  lw          $v0, -0x7A00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FA48u;
        goto label_47fa48;
    }
    ctx->pc = 0x47FA40u;
    {
        const bool branch_taken_0x47fa40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA40u;
        // 0x47fa44: 0x8f828600  lw          $v0, -0x7A00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fa40) {
            ctx->pc = 0x47FA68u;
            goto label_47fa68;
        }
    }
    ctx->pc = 0x47FA48u;
label_47fa48:
    // 0x47fa48: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x47fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_47fa4c:
    // 0x47fa4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_47fa50:
    if (ctx->pc == 0x47FA50u) {
        ctx->pc = 0x47FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA4Cu;
        // 0x47fa50: 0x8f828600  lw          $v0, -0x7A00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FA54u;
        goto label_47fa54;
    }
    ctx->pc = 0x47FA4Cu;
    {
        const bool branch_taken_0x47fa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA4Cu;
        // 0x47fa50: 0x8f828600  lw          $v0, -0x7A00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fa4c) {
            ctx->pc = 0x47FA68u;
            goto label_47fa68;
        }
    }
    ctx->pc = 0x47FA54u;
label_47fa54:
    // 0x47fa54: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x47fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_47fa58:
    // 0x47fa58: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x47fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_47fa5c:
    // 0x47fa5c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x47fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_47fa60:
    // 0x47fa60: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x47fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_47fa64:
    // 0x47fa64: 0x8f828600  lw          $v0, -0x7A00($gp)
    ctx->pc = 0x47fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
label_47fa68:
    // 0x47fa68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x47fa68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47fa6c:
    // 0x47fa6c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x47fa6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47fa70:
    // 0x47fa70: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_47fa74:
    if (ctx->pc == 0x47FA74u) {
        ctx->pc = 0x47FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA70u;
        // 0x47fa74: 0x8f8485fc  lw          $a0, -0x7A04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FA78u;
        goto label_47fa78;
    }
    ctx->pc = 0x47FA70u;
    {
        const bool branch_taken_0x47fa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA70u;
        // 0x47fa74: 0x8f8485fc  lw          $a0, -0x7A04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fa70) {
            ctx->pc = 0x47FA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47fa00;
        }
    }
    ctx->pc = 0x47FA78u;
label_47fa78:
    // 0x47fa78: 0x8f8485fc  lw          $a0, -0x7A04($gp)
    ctx->pc = 0x47fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
label_47fa7c:
    // 0x47fa7c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_47fa80:
    if (ctx->pc == 0x47FA80u) {
        ctx->pc = 0x47FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA7Cu;
        // 0x47fa80: 0x26a3ad18  addiu       $v1, $s5, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FA84u;
        goto label_47fa84;
    }
    ctx->pc = 0x47FA7Cu;
    {
        const bool branch_taken_0x47fa7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA7Cu;
        // 0x47fa80: 0x26a3ad18  addiu       $v1, $s5, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fa7c) {
            ctx->pc = 0x47FA94u;
            goto label_47fa94;
        }
    }
    ctx->pc = 0x47FA84u;
label_47fa84:
    // 0x47fa84: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x47fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_47fa88:
    // 0x47fa88: 0x40f809  jalr        $v0
label_47fa8c:
    if (ctx->pc == 0x47FA8Cu) {
        ctx->pc = 0x47FA90u;
        goto label_47fa90;
    }
    ctx->pc = 0x47FA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47FA90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FA88u, 0x47FA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47FA90u;
label_47fa90:
    // 0x47fa90: 0xaf8085fc  sw          $zero, -0x7A04($gp)
    ctx->pc = 0x47fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936060), GPR_U32(ctx, 0));
label_47fa94:
    // 0x47fa94: 0xc11f74a  jal         func_47DD28
label_47fa98:
    if (ctx->pc == 0x47FA98u) {
        ctx->pc = 0x47FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FA94u;
        // 0x47fa98: 0x8f848948  lw          $a0, -0x76B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FA9Cu;
        goto label_47fa9c;
    }
    ctx->pc = 0x47FA94u;
    SET_GPR_U32(ctx, 31, 0x47FA9Cu);
    ctx->pc = 0x47FA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47FA94u;
    // 0x47fa98: 0x8f848948  lw          $a0, -0x76B8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936904)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x47FA94u, 0x47FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FA9Cu;
label_47fa9c:
    // 0x47fa9c: 0xaf808948  sw          $zero, -0x76B8($gp)
    ctx->pc = 0x47fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936904), GPR_U32(ctx, 0));
label_47faa0:
    // 0x47faa0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x47faa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47faa4:
    // 0x47faa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47faa8:
    // 0x47faa8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x47faa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47faac:
    // 0x47faac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x47faacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47fab0:
    // 0x47fab0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47fab0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47fab4:
    // 0x47fab4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x47fab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47fab8:
    // 0x47fab8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x47fab8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47fabc:
    // 0x47fabc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47fabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47fac0:
    // 0x47fac0: 0x3e00008  jr          $ra
label_47fac4:
    if (ctx->pc == 0x47FAC4u) {
        ctx->pc = 0x47FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FAC0u;
        // 0x47fac4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FAC8u;
        goto label_fallthrough_0x47fac0;
    }
    ctx->pc = 0x47FAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FAC0u;
        // 0x47fac4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47fac0:
    ctx->pc = 0x47FAC8u;
}
