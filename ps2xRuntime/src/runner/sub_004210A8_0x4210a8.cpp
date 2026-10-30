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

// Function: sub_004210A8
// Address: 0x4210a8 - 0x4211a0
void sub_004210A8_0x4210a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004210A8_0x4210a8");
#endif

    switch (ctx->pc) {
        case 0x42114cu: goto label_42114c;
        default: break;
    }

    ctx->pc = 0x4210a8u;

    // 0x4210a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4210a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4210ac: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4210acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4210b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4210b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4210b4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4210b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4210b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4210b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4210bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4210bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4210c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4210c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4210c4: 0x26470078  addiu       $a3, $s2, 0x78
    ctx->pc = 0x4210c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x4210c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4210c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4210cc: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4210ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4210d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4210d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4210d4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x4210d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x4210d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4210d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4210dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4210dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4210e0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4210e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4210e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4210e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4210e8: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x4210e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x4210ec: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x4210ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x4210f0: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x4210f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
    // 0x4210f4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x4210f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4210f8: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x4210f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x4210fc: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x4210fcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x421100: 0x1480001e  bnez        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x421100u;
    {
        const bool branch_taken_0x421100 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x421104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421100u;
        // 0x421104: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421100) {
            ctx->pc = 0x42117Cu;
            goto label_42117c;
        }
    }
    ctx->pc = 0x421108u;
    // 0x421108: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x421108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x42110c: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x42110cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x421110: 0x24425818  addiu       $v0, $v0, 0x5818
    ctx->pc = 0x421110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22552));
    // 0x421114: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x421114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x421118: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x421118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x42111c: 0x3c100098  lui         $s0, 0x98
    ctx->pc = 0x42111cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)152 << 16));
    // 0x421120: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x421120u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x421124: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x421124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x421128: 0x3610967f  ori         $s0, $s0, 0x967F
    ctx->pc = 0x421128u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)38527);
    // 0x42112c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x42112cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x421130: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x421130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x421134: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x421134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421138: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x421138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x42113c: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x42113cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x421140: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x421140u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x421144: 0xc107444  jal         func_41D110
    ctx->pc = 0x421144u;
    SET_GPR_U32(ctx, 31, 0x42114Cu);
    ctx->pc = 0x421148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421144u;
    // 0x421148: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x421144u, 0x42114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42114Cu;
label_42114c:
    // 0x42114c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42114Cu;
    {
        const bool branch_taken_0x42114c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42114Cu;
        // 0x421150: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42114c) {
            ctx->pc = 0x421170u;
            goto label_421170;
        }
    }
    ctx->pc = 0x421154u;
    // 0x421154: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x421154u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x421158: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x421158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x42115c: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x42115cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x421160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x421160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x421164: 0x202202b  sltu        $a0, $s0, $v0
    ctx->pc = 0x421164u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x421168: 0x44280a  movz        $a1, $v0, $a0
    ctx->pc = 0x421168u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x42116c: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x42116cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
label_421170:
    // 0x421170: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x421170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x421174: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x421174u;
    {
        const bool branch_taken_0x421174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421174u;
        // 0x421178: 0x2621018  mult        $v0, $s3, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x421174) {
            ctx->pc = 0x421180u;
            goto label_421180;
        }
    }
    ctx->pc = 0x42117Cu;
label_42117c:
    // 0x42117c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x42117cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421180:
    // 0x421180: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x421180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x421184: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x421184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x421188: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x421188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42118c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x42118cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x421190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x421190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x421194: 0x3e00008  jr          $ra
    ctx->pc = 0x421194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421194u;
        // 0x421198: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42119Cu;
    // 0x42119c: 0x0  nop
    ctx->pc = 0x42119cu;
    // NOP
    ctx->pc = 0x4211a0u;
}
