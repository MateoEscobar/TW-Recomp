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

// Function: sub_001976E8
// Address: 0x1976e8 - 0x1977c8
void sub_001976E8_0x1976e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001976E8_0x1976e8");
#endif

    switch (ctx->pc) {
        case 0x197754u: goto label_197754;
        case 0x197774u: goto label_197774;
        case 0x19778cu: goto label_19778c;
        case 0x1977a8u: goto label_1977a8;
        default: break;
    }

    ctx->pc = 0x1976e8u;

    // 0x1976e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1976e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1976ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1976ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1976f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1976f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1976f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1976f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1976f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1976f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1976fc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1976fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x197700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197704: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x197704u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x197708: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x197708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x19770c: 0x580c0  sll         $s0, $a1, 3
    ctx->pc = 0x19770cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x197710: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x197710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x197714: 0x32100040  andi        $s0, $s0, 0x40
    ctx->pc = 0x197714u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
    // 0x197718: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x197718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x19771c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x19771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x197720: 0x30a70080  andi        $a3, $a1, 0x80
    ctx->pc = 0x197720u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x197724: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x197724u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x197728: 0x30a80020  andi        $t0, $a1, 0x20
    ctx->pc = 0x197728u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x19772c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x19772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x197730: 0x30a50004  andi        $a1, $a1, 0x4
    ctx->pc = 0x197730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x197734: 0x66800b  movn        $s0, $v1, $a2
    ctx->pc = 0x197734u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x197738: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x197738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19773c: 0x47800b  movn        $s0, $v0, $a3
    ctx->pc = 0x19773cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x197740: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x197740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x197744: 0x68800b  movn        $s0, $v1, $t0
    ctx->pc = 0x197744u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x197748: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x197748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x19774c: 0xc060ac8  jal         func_182B20
    ctx->pc = 0x19774Cu;
    SET_GPR_U32(ctx, 31, 0x197754u);
    ctx->pc = 0x197750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19774Cu;
    // 0x197750: 0x45800b  movn        $s0, $v0, $a1 (Delay Slot)
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B20u, 0x19774Cu, 0x197754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197754u;
label_197754:
    // 0x197754: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x197754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x197758: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x197758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x19775c: 0x8e64cd4c  lw          $a0, -0x32B4($s3)
    ctx->pc = 0x19775cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    // 0x197760: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x197760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x197764: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x197764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197768: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x197768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19776c: 0xc060794  jal         func_181E50
    ctx->pc = 0x19776Cu;
    SET_GPR_U32(ctx, 31, 0x197774u);
    ctx->pc = 0x197770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19776Cu;
    // 0x197770: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E50u, 0x19776Cu, 0x197774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197774u;
label_197774:
    // 0x197774: 0x26104000  addiu       $s0, $s0, 0x4000
    ctx->pc = 0x197774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16384));
    // 0x197778: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x197778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19777c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19777cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197780: 0x8e64cd4c  lw          $a0, -0x32B4($s3)
    ctx->pc = 0x197780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    // 0x197784: 0xc0607d0  jal         func_181F40
    ctx->pc = 0x197784u;
    SET_GPR_U32(ctx, 31, 0x19778Cu);
    ctx->pc = 0x197788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197784u;
    // 0x197788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181F40u, 0x197784u, 0x19778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19778Cu;
label_19778c:
    // 0x19778c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19778Cu;
    {
        const bool branch_taken_0x19778c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19778Cu;
        // 0x197790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19778c) {
            ctx->pc = 0x1977A8u;
            goto label_1977a8;
        }
    }
    ctx->pc = 0x197794u;
    // 0x197794: 0x8e64cd4c  lw          $a0, -0x32B4($s3)
    ctx->pc = 0x197794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    // 0x197798: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x197798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19779c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19779cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1977a0: 0xc061e58  jal         func_187960
    ctx->pc = 0x1977A0u;
    SET_GPR_U32(ctx, 31, 0x1977A8u);
    ctx->pc = 0x1977A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1977A0u;
    // 0x1977a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x1977A0u, 0x1977A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1977A8u;
label_1977a8:
    // 0x1977a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1977a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1977ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1977acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1977b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1977b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1977b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1977b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1977b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1977b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1977bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1977bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1977c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1977C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1977C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977C0u;
        // 0x1977c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1977C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1977C8u;
}
