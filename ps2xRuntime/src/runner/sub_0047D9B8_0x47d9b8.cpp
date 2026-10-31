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

// Function: sub_0047D9B8
// Address: 0x47d9b8 - 0x47db70
void sub_0047D9B8_0x47d9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D9B8_0x47d9b8");
#endif

    switch (ctx->pc) {
        case 0x47d9b8u: goto label_47d9b8;
        case 0x47d9bcu: goto label_47d9bc;
        case 0x47d9c0u: goto label_47d9c0;
        case 0x47d9c4u: goto label_47d9c4;
        case 0x47d9c8u: goto label_47d9c8;
        case 0x47d9ccu: goto label_47d9cc;
        case 0x47d9d0u: goto label_47d9d0;
        case 0x47d9d4u: goto label_47d9d4;
        case 0x47d9d8u: goto label_47d9d8;
        case 0x47d9dcu: goto label_47d9dc;
        case 0x47d9e0u: goto label_47d9e0;
        case 0x47d9e4u: goto label_47d9e4;
        case 0x47d9e8u: goto label_47d9e8;
        case 0x47d9ecu: goto label_47d9ec;
        case 0x47d9f0u: goto label_47d9f0;
        case 0x47d9f4u: goto label_47d9f4;
        case 0x47d9f8u: goto label_47d9f8;
        case 0x47d9fcu: goto label_47d9fc;
        case 0x47da00u: goto label_47da00;
        case 0x47da04u: goto label_47da04;
        case 0x47da08u: goto label_47da08;
        case 0x47da0cu: goto label_47da0c;
        case 0x47da10u: goto label_47da10;
        case 0x47da14u: goto label_47da14;
        case 0x47da18u: goto label_47da18;
        case 0x47da1cu: goto label_47da1c;
        case 0x47da20u: goto label_47da20;
        case 0x47da24u: goto label_47da24;
        case 0x47da28u: goto label_47da28;
        case 0x47da2cu: goto label_47da2c;
        case 0x47da30u: goto label_47da30;
        case 0x47da34u: goto label_47da34;
        case 0x47da38u: goto label_47da38;
        case 0x47da3cu: goto label_47da3c;
        case 0x47da40u: goto label_47da40;
        case 0x47da44u: goto label_47da44;
        case 0x47da48u: goto label_47da48;
        case 0x47da4cu: goto label_47da4c;
        case 0x47da50u: goto label_47da50;
        case 0x47da54u: goto label_47da54;
        case 0x47da58u: goto label_47da58;
        case 0x47da5cu: goto label_47da5c;
        case 0x47da60u: goto label_47da60;
        case 0x47da64u: goto label_47da64;
        case 0x47da68u: goto label_47da68;
        case 0x47da6cu: goto label_47da6c;
        case 0x47da70u: goto label_47da70;
        case 0x47da74u: goto label_47da74;
        case 0x47da78u: goto label_47da78;
        case 0x47da7cu: goto label_47da7c;
        case 0x47da80u: goto label_47da80;
        case 0x47da84u: goto label_47da84;
        case 0x47da88u: goto label_47da88;
        case 0x47da8cu: goto label_47da8c;
        case 0x47da90u: goto label_47da90;
        case 0x47da94u: goto label_47da94;
        case 0x47da98u: goto label_47da98;
        case 0x47da9cu: goto label_47da9c;
        case 0x47daa0u: goto label_47daa0;
        case 0x47daa4u: goto label_47daa4;
        case 0x47daa8u: goto label_47daa8;
        case 0x47daacu: goto label_47daac;
        case 0x47dab0u: goto label_47dab0;
        case 0x47dab4u: goto label_47dab4;
        case 0x47dab8u: goto label_47dab8;
        case 0x47dabcu: goto label_47dabc;
        case 0x47dac0u: goto label_47dac0;
        case 0x47dac4u: goto label_47dac4;
        case 0x47dac8u: goto label_47dac8;
        case 0x47daccu: goto label_47dacc;
        case 0x47dad0u: goto label_47dad0;
        case 0x47dad4u: goto label_47dad4;
        case 0x47dad8u: goto label_47dad8;
        case 0x47dadcu: goto label_47dadc;
        case 0x47dae0u: goto label_47dae0;
        case 0x47dae4u: goto label_47dae4;
        case 0x47dae8u: goto label_47dae8;
        case 0x47daecu: goto label_47daec;
        case 0x47daf0u: goto label_47daf0;
        case 0x47daf4u: goto label_47daf4;
        case 0x47daf8u: goto label_47daf8;
        case 0x47dafcu: goto label_47dafc;
        case 0x47db00u: goto label_47db00;
        case 0x47db04u: goto label_47db04;
        case 0x47db08u: goto label_47db08;
        case 0x47db0cu: goto label_47db0c;
        case 0x47db10u: goto label_47db10;
        case 0x47db14u: goto label_47db14;
        case 0x47db18u: goto label_47db18;
        case 0x47db1cu: goto label_47db1c;
        case 0x47db20u: goto label_47db20;
        case 0x47db24u: goto label_47db24;
        case 0x47db28u: goto label_47db28;
        case 0x47db2cu: goto label_47db2c;
        case 0x47db30u: goto label_47db30;
        case 0x47db34u: goto label_47db34;
        case 0x47db38u: goto label_47db38;
        case 0x47db3cu: goto label_47db3c;
        case 0x47db40u: goto label_47db40;
        case 0x47db44u: goto label_47db44;
        case 0x47db48u: goto label_47db48;
        case 0x47db4cu: goto label_47db4c;
        case 0x47db50u: goto label_47db50;
        case 0x47db54u: goto label_47db54;
        case 0x47db58u: goto label_47db58;
        case 0x47db5cu: goto label_47db5c;
        case 0x47db60u: goto label_47db60;
        case 0x47db64u: goto label_47db64;
        case 0x47db68u: goto label_47db68;
        case 0x47db6cu: goto label_47db6c;
        default: break;
    }

    ctx->pc = 0x47d9b8u;

label_47d9b8:
    // 0x47d9b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x47d9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_47d9bc:
    // 0x47d9bc: 0x8f8285d4  lw          $v0, -0x7A2C($gp)
    ctx->pc = 0x47d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936020)));
label_47d9c0:
    // 0x47d9c0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x47d9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_47d9c4:
    // 0x47d9c4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x47d9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_47d9c8:
    // 0x47d9c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47d9c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47d9cc:
    // 0x47d9cc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x47d9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_47d9d0:
    // 0x47d9d0: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x47d9d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_47d9d4:
    // 0x47d9d4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x47d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_47d9d8:
    // 0x47d9d8: 0xe2880b  movn        $s1, $a3, $v0
    ctx->pc = 0x47d9d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_47d9dc:
    // 0x47d9dc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x47d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_47d9e0:
    // 0x47d9e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x47d9e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47d9e4:
    // 0x47d9e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47d9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47d9e8:
    // 0x47d9e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x47d9e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47d9ec:
    // 0x47d9ec: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x47d9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_47d9f0:
    // 0x47d9f0: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x47d9f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_47d9f4:
    // 0x47d9f4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x47d9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_47d9f8:
    // 0x47d9f8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x47d9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_47d9fc:
    // 0x47d9fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47d9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47da00:
    // 0x47da00: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
label_47da04:
    if (ctx->pc == 0x47DA04u) {
        ctx->pc = 0x47DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DA00u;
        // 0x47da04: 0xc6a80b  movn        $s5, $a2, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DA08u;
        goto label_47da08;
    }
    ctx->pc = 0x47DA00u;
    {
        const bool branch_taken_0x47da00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x47DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DA00u;
        // 0x47da04: 0xc6a80b  movn        $s5, $a2, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47da00) {
            ctx->pc = 0x47DA64u;
            goto label_47da64;
        }
    }
    ctx->pc = 0x47DA08u;
label_47da08:
    // 0x47da08: 0x8f8485dc  lw          $a0, -0x7A24($gp)
    ctx->pc = 0x47da08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936028)));
label_47da0c:
    // 0x47da0c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_47da10:
    if (ctx->pc == 0x47DA10u) {
        ctx->pc = 0x47DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DA0Cu;
        // 0x47da10: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DA14u;
        goto label_47da14;
    }
    ctx->pc = 0x47DA0Cu;
    {
        const bool branch_taken_0x47da0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DA0Cu;
        // 0x47da10: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47da0c) {
            ctx->pc = 0x47DA24u;
            goto label_47da24;
        }
    }
    ctx->pc = 0x47DA14u;
label_47da14:
    // 0x47da14: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x47da14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_47da18:
    // 0x47da18: 0x8c62ae30  lw          $v0, -0x51D0($v1)
    ctx->pc = 0x47da18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946352)));
label_47da1c:
    // 0x47da1c: 0x10000006  b           . + 4 + (0x6 << 2)
label_47da20:
    if (ctx->pc == 0x47DA20u) {
        ctx->pc = 0x47DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DA1Cu;
        // 0x47da20: 0x2852824  and         $a1, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DA24u;
        goto label_47da24;
    }
    ctx->pc = 0x47DA1Cu;
    {
        const bool branch_taken_0x47da1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DA1Cu;
        // 0x47da20: 0x2852824  and         $a1, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47da1c) {
            ctx->pc = 0x47DA38u;
            goto label_47da38;
        }
    }
    ctx->pc = 0x47DA24u;
label_47da24:
    // 0x47da24: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47da24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47da28:
    // 0x47da28: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x47da28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_47da2c:
    // 0x47da2c: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x47da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_47da30:
    // 0x47da30: 0x2852824  and         $a1, $s4, $a1
    ctx->pc = 0x47da30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
label_47da34:
    // 0x47da34: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x47da34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_47da38:
    // 0x47da38: 0x40f809  jalr        $v0
label_47da3c:
    if (ctx->pc == 0x47DA3Cu) {
        ctx->pc = 0x47DA40u;
        goto label_47da40;
    }
    ctx->pc = 0x47DA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47DA40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DA38u, 0x47DA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47DA40u;
label_47da40:
    // 0x47da40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47da40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47da44:
    // 0x47da44: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_47da48:
    if (ctx->pc == 0x47DA48u) {
        ctx->pc = 0x47DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DA44u;
        // 0x47da48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DA4Cu;
        goto label_47da4c;
    }
    ctx->pc = 0x47DA44u;
    {
        const bool branch_taken_0x47da44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x47DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DA44u;
        // 0x47da48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47da44) {
            ctx->pc = 0x47DA68u;
            goto label_47da68;
        }
    }
    ctx->pc = 0x47DA4Cu;
label_47da4c:
    // 0x47da4c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_47da50:
    if (ctx->pc == 0x47DA50u) {
        ctx->pc = 0x47DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DA4Cu;
        // 0x47da50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DA54u;
        goto label_47da54;
    }
    ctx->pc = 0x47DA4Cu;
    {
        const bool branch_taken_0x47da4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DA4Cu;
        // 0x47da50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47da4c) {
            ctx->pc = 0x47DB3Cu;
            goto label_47db3c;
        }
    }
    ctx->pc = 0x47DA54u;
label_47da54:
    // 0x47da54: 0xc11f886  jal         func_47E218
label_47da58:
    if (ctx->pc == 0x47DA58u) {
        ctx->pc = 0x47DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DA54u;
        // 0x47da58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DA5Cu;
        goto label_47da5c;
    }
    ctx->pc = 0x47DA54u;
    SET_GPR_U32(ctx, 31, 0x47DA5Cu);
    ctx->pc = 0x47DA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47DA54u;
    // 0x47da58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47E218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E218u, 0x47DA54u, 0x47DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DA5Cu;
label_47da5c:
    // 0x47da5c: 0x10000037  b           . + 4 + (0x37 << 2)
label_47da60:
    if (ctx->pc == 0x47DA60u) {
        ctx->pc = 0x47DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DA5Cu;
        // 0x47da60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DA64u;
        goto label_47da64;
    }
    ctx->pc = 0x47DA5Cu;
    {
        const bool branch_taken_0x47da5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DA5Cu;
        // 0x47da60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47da5c) {
            ctx->pc = 0x47DB3Cu;
            goto label_47db3c;
        }
    }
    ctx->pc = 0x47DA64u;
label_47da64:
    // 0x47da64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47da68:
    // 0x47da68: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x47da68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_47da6c:
    // 0x47da6c: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x47da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_47da70:
    // 0x47da70: 0x152023  negu        $a0, $s5
    ctx->pc = 0x47da70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
label_47da74:
    // 0x47da74: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x47da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_47da78:
    // 0x47da78: 0x26630007  addiu       $v1, $s3, 0x7
    ctx->pc = 0x47da78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_47da7c:
    // 0x47da7c: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x47da7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_47da80:
    // 0x47da80: 0x390c2  srl         $s2, $v1, 3
    ctx->pc = 0x47da80u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_47da84:
    // 0x47da84: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x47da84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_47da88:
    // 0x47da88: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x47da88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_47da8c:
    // 0x47da8c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x47da8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47da90:
    // 0x47da90: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x47da90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_47da94:
    // 0x47da94: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x47da94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
label_47da98:
    // 0x47da98: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x47da98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_47da9c:
    // 0x47da9c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x47da9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_47daa0:
    // 0x47daa0: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_47daa4:
    if (ctx->pc == 0x47DAA4u) {
        ctx->pc = 0x47DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DAA0u;
        // 0x47daa4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DAA8u;
        goto label_47daa8;
    }
    ctx->pc = 0x47DAA0u;
    {
        const bool branch_taken_0x47daa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DAA0u;
        // 0x47daa4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47daa0) {
            ctx->pc = 0x47DB18u;
            goto label_47db18;
        }
    }
    ctx->pc = 0x47DAA8u;
label_47daa8:
    // 0x47daa8: 0x2641018  mult        $v0, $s3, $a0
    ctx->pc = 0x47daa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_47daac:
    // 0x47daac: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47daacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47dab0:
    // 0x47dab0: 0x2477ad18  addiu       $s7, $v1, -0x52E8
    ctx->pc = 0x47dab0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_47dab4:
    // 0x47dab4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x47dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_47dab8:
    // 0x47dab8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x47dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47dabc:
    // 0x47dabc: 0x559821  addu        $s3, $v0, $s5
    ctx->pc = 0x47dabcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_47dac0:
    // 0x47dac0: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x47dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_47dac4:
    // 0x47dac4: 0x0  nop
    ctx->pc = 0x47dac4u;
    // NOP
label_47dac8:
    // 0x47dac8: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x47dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_47dacc:
    // 0x47dacc: 0x40f809  jalr        $v0
label_47dad0:
    if (ctx->pc == 0x47DAD0u) {
        ctx->pc = 0x47DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DACCu;
        // 0x47dad0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DAD4u;
        goto label_47dad4;
    }
    ctx->pc = 0x47DACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47DAD4u);
        ctx->pc = 0x47DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DACCu;
        // 0x47dad0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DACCu, 0x47DAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47DAD4u;
label_47dad4:
    // 0x47dad4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x47dad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47dad8:
    // 0x47dad8: 0x10e0ffde  beqz        $a3, . + 4 + (-0x22 << 2)
label_47dadc:
    if (ctx->pc == 0x47DADCu) {
        ctx->pc = 0x47DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DAD8u;
        // 0x47dadc: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DAE0u;
        goto label_47dae0;
    }
    ctx->pc = 0x47DAD8u;
    {
        const bool branch_taken_0x47dad8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DAD8u;
        // 0x47dadc: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dad8) {
            ctx->pc = 0x47DA54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47da54;
        }
    }
    ctx->pc = 0x47DAE0u;
label_47dae0:
    // 0x47dae0: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x47dae0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_47dae4:
    // 0x47dae4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x47dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_47dae8:
    // 0x47dae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47dae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47daec:
    // 0x47daec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x47daecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47daf0:
    // 0x47daf0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x47daf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_47daf4:
    // 0x47daf4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x47daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47daf8:
    // 0x47daf8: 0xacf60004  sw          $s6, 0x4($a3)
    ctx->pc = 0x47daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 22));
label_47dafc:
    // 0x47dafc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x47dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_47db00:
    // 0x47db00: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x47db00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47db04:
    // 0x47db04: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x47db04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_47db08:
    // 0x47db08: 0xc10c1fa  jal         func_4307E8
label_47db0c:
    if (ctx->pc == 0x47DB0Cu) {
        ctx->pc = 0x47DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DB08u;
        // 0x47db0c: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DB10u;
        goto label_47db10;
    }
    ctx->pc = 0x47DB08u;
    SET_GPR_U32(ctx, 31, 0x47DB10u);
    ctx->pc = 0x47DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47DB08u;
    // 0x47db0c: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x47DB08u, 0x47DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DB10u;
label_47db10:
    // 0x47db10: 0x5620ffed  bnel        $s1, $zero, . + 4 + (-0x13 << 2)
label_47db14:
    if (ctx->pc == 0x47DB14u) {
        ctx->pc = 0x47DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DB10u;
        // 0x47db14: 0x8ee20108  lw          $v0, 0x108($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DB18u;
        goto label_47db18;
    }
    ctx->pc = 0x47DB10u;
    {
        const bool branch_taken_0x47db10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x47db10) {
            ctx->pc = 0x47DB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47DB10u;
            // 0x47db14: 0x8ee20108  lw          $v0, 0x108($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47DAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47dac8;
        }
    }
    ctx->pc = 0x47DB18u;
label_47db18:
    // 0x47db18: 0x8f848930  lw          $a0, -0x76D0($gp)
    ctx->pc = 0x47db18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
label_47db1c:
    // 0x47db1c: 0x27828930  addiu       $v0, $gp, -0x76D0
    ctx->pc = 0x47db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936880));
label_47db20:
    // 0x47db20: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x47db20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_47db24:
    // 0x47db24: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x47db24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_47db28:
    // 0x47db28: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x47db28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_47db2c:
    // 0x47db2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47db2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47db30:
    // 0x47db30: 0x8f828930  lw          $v0, -0x76D0($gp)
    ctx->pc = 0x47db30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
label_47db34:
    // 0x47db34: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x47db34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_47db38:
    // 0x47db38: 0xaf838930  sw          $v1, -0x76D0($gp)
    ctx->pc = 0x47db38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 3));
label_47db3c:
    // 0x47db3c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x47db3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_47db40:
    // 0x47db40: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x47db40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47db44:
    // 0x47db44: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x47db44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47db48:
    // 0x47db48: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x47db48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47db4c:
    // 0x47db4c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x47db4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47db50:
    // 0x47db50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47db50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47db54:
    // 0x47db54: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x47db54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47db58:
    // 0x47db58: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x47db58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47db5c:
    // 0x47db5c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x47db5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47db60:
    // 0x47db60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47db60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47db64:
    // 0x47db64: 0x3e00008  jr          $ra
label_47db68:
    if (ctx->pc == 0x47DB68u) {
        ctx->pc = 0x47DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DB64u;
        // 0x47db68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DB6Cu;
        goto label_47db6c;
    }
    ctx->pc = 0x47DB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DB64u;
        // 0x47db68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47DB6Cu;
label_47db6c:
    // 0x47db6c: 0x0  nop
    ctx->pc = 0x47db6cu;
    // NOP
    ctx->pc = 0x47db70u;
}
