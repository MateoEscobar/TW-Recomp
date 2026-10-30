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

// Function: sub_00324018
// Address: 0x324018 - 0x324120
void sub_00324018_0x324018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324018_0x324018");
#endif

    switch (ctx->pc) {
        case 0x32409cu: goto label_32409c;
        default: break;
    }

    ctx->pc = 0x324018u;

    // 0x324018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x324018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32401c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x324020: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x324020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x324024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32402c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32402cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324030: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x324030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x324034: 0x8c43fff0  lw          $v1, -0x10($v0)
    ctx->pc = 0x324034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x324038: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324038u;
    {
        const bool branch_taken_0x324038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x32403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324038u;
        // 0x32403c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324038) {
            ctx->pc = 0x324048u;
            goto label_324048;
        }
    }
    ctx->pc = 0x324040u;
    // 0x324040: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x324040u;
    {
        const bool branch_taken_0x324040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324040u;
        // 0x324044: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324040) {
            ctx->pc = 0x3240F8u;
            goto label_3240f8;
        }
    }
    ctx->pc = 0x324048u;
label_324048:
    // 0x324048: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x324048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x32404c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x324050: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x324050u;
    {
        const bool branch_taken_0x324050 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x324054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324050u;
        // 0x324054: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324050) {
            ctx->pc = 0x324074u;
            goto label_324074;
        }
    }
    ctx->pc = 0x324058u;
    // 0x324058: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x324058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x32405c: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x32405cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x324060: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x324060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x324064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324068: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x324068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32406c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32406Cu;
    {
        const bool branch_taken_0x32406c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32406Cu;
        // 0x324070: 0xae040058  sw          $a0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32406c) {
            ctx->pc = 0x3240B8u;
            goto label_3240b8;
        }
    }
    ctx->pc = 0x324074u;
label_324074:
    // 0x324074: 0x3c090057  lui         $t1, 0x57
    ctx->pc = 0x324074u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)87 << 16));
    // 0x324078: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x324078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x32407c: 0x8e060054  lw          $a2, 0x54($s0)
    ctx->pc = 0x32407cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x324080: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x324080u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x324084: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x324084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x324088: 0x252947f0  addiu       $t1, $t1, 0x47F0
    ctx->pc = 0x324088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18416));
    // 0x32408c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32408cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324090: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x324090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324094: 0xc0cb1ac  jal         func_32C6B0
    ctx->pc = 0x324094u;
    SET_GPR_U32(ctx, 31, 0x32409Cu);
    ctx->pc = 0x324098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324094u;
    // 0x324098: 0x354afffd  ori         $t2, $t2, 0xFFFD (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65533);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C6B0u, 0x324094u, 0x32409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32409Cu;
label_32409c:
    // 0x32409c: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x32409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3240a0: 0x8e080054  lw          $t0, 0x54($s0)
    ctx->pc = 0x3240a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3240a4: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x3240a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x3240a8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x3240a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x3240ac: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x3240acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3240b0: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x3240b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x3240b4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3240b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3240b8:
    // 0x3240b8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3240b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3240bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3240bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3240c0: 0x1052818  mult        $a1, $t0, $a1
    ctx->pc = 0x3240c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3240c4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3240c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3240c8: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x3240c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x3240cc: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x3240ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3240d0: 0xdc677ff0  ld          $a3, 0x7FF0($v1)
    ctx->pc = 0x3240d0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 32752)));
    // 0x3240d4: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x3240d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3240d8: 0x51300b  movn        $a2, $v0, $s1
    ctx->pc = 0x3240d8u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x3240dc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3240dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3240e0: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x3240e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x3240e4: 0xdc627ff8  ld          $v0, 0x7FF8($v1)
    ctx->pc = 0x3240e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 32760)));
    // 0x3240e8: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x3240e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x3240ec: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x3240ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3240f0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3240f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3240f4: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x3240f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
label_3240f8:
    // 0x3240f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3240f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3240fc: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x3240fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x324100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324104: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x324104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x324108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32410c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32410cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x324110: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x324110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324114: 0x3e00008  jr          $ra
    ctx->pc = 0x324114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324114u;
        // 0x324118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32411Cu;
    // 0x32411c: 0x0  nop
    ctx->pc = 0x32411cu;
    // NOP
    ctx->pc = 0x324120u;
}
