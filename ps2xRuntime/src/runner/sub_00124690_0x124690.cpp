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

// Function: sub_00124690
// Address: 0x124690 - 0x124778
void sub_00124690_0x124690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124690_0x124690");
#endif

    switch (ctx->pc) {
        case 0x1246d0u: goto label_1246d0;
        case 0x1246ecu: goto label_1246ec;
        case 0x12471cu: goto label_12471c;
        case 0x124730u: goto label_124730;
        case 0x124740u: goto label_124740;
        case 0x124754u: goto label_124754;
        default: break;
    }

    ctx->pc = 0x124690u;

    // 0x124690: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x124690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x124694: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x124694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x124698: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x124698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x12469c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x12469cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1246a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1246a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246a4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1246a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1246a8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1246a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1246ac: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1246acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1246b0: 0x8c43b194  lw          $v1, -0x4E6C($v0)
    ctx->pc = 0x1246b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B194u));
    // 0x1246b4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1246B4u;
    {
        const bool branch_taken_0x1246b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246B4u;
        // 0x1246b8: 0xe62c01a0  swc1        $f12, 0x1A0($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246b4) {
            ctx->pc = 0x124748u;
            goto label_124748;
        }
    }
    ctx->pc = 0x1246BCu;
    // 0x1246bc: 0x7a220180  lq          $v0, 0x180($s1)
    ctx->pc = 0x1246bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1246c0: 0x7a2301f0  lq          $v1, 0x1F0($s1)
    ctx->pc = 0x1246c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x1246c4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1246c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1246c8: 0xc049000  jal         func_124000
    ctx->pc = 0x1246C8u;
    SET_GPR_U32(ctx, 31, 0x1246D0u);
    ctx->pc = 0x1246CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1246C8u;
    // 0x1246cc: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124000u, 0x1246C8u, 0x1246D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1246D0u;
label_1246d0:
    // 0x1246d0: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1246d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1246d4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1246D4u;
    {
        const bool branch_taken_0x1246d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1246d4) {
            ctx->pc = 0x1246D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1246D4u;
            // 0x1246d8: 0x7a220180  lq          $v0, 0x180($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1246F4u;
            goto label_1246f4;
        }
    }
    ctx->pc = 0x1246DCu;
    // 0x1246dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1246dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1246e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246e4: 0xc049092  jal         func_124248
    ctx->pc = 0x1246E4u;
    SET_GPR_U32(ctx, 31, 0x1246ECu);
    ctx->pc = 0x1246E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1246E4u;
    // 0x1246e8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124248u, 0x1246E4u, 0x1246ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1246ECu;
label_1246ec:
    // 0x1246ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1246ECu;
    {
        const bool branch_taken_0x1246ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246ECu;
        // 0x1246f0: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246ec) {
            ctx->pc = 0x124704u;
            goto label_124704;
        }
    }
    ctx->pc = 0x1246F4u;
label_1246f4:
    // 0x1246f4: 0x7a2301f0  lq          $v1, 0x1F0($s1)
    ctx->pc = 0x1246f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x1246f8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1246f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1246fc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1246fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x124700: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x124700u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_124704:
    // 0x124704: 0x263001f0  addiu       $s0, $s1, 0x1F0
    ctx->pc = 0x124704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x124708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12470c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12470cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124710: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x124710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x124714: 0xc0484a6  jal         func_121298
    ctx->pc = 0x124714u;
    SET_GPR_U32(ctx, 31, 0x12471Cu);
    ctx->pc = 0x124718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124714u;
    // 0x124718: 0x26330010  addiu       $s3, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121298u, 0x124714u, 0x12471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12471Cu;
label_12471c:
    // 0x12471c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x12471cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x124720: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x124720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x124724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124728: 0xc0cdc0a  jal         func_337028
    ctx->pc = 0x124728u;
    SET_GPR_U32(ctx, 31, 0x124730u);
    ctx->pc = 0x12472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124728u;
    // 0x12472c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x124728u, 0x124730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124730u;
label_124730:
    // 0x124730: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124730u;
    {
        const bool branch_taken_0x124730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124730u;
        // 0x124734: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124730) {
            ctx->pc = 0x124740u;
            goto label_124740;
        }
    }
    ctx->pc = 0x124738u;
    // 0x124738: 0xc0cd972  jal         func_3365C8
    ctx->pc = 0x124738u;
    SET_GPR_U32(ctx, 31, 0x124740u);
    ctx->pc = 0x12473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124738u;
    // 0x12473c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x124738u, 0x124740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124740u;
label_124740:
    // 0x124740: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x124740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x124744: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x124744u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_124748:
    // 0x124748: 0xc62c01a0  lwc1        $f12, 0x1A0($s1)
    ctx->pc = 0x124748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12474c: 0xc04828c  jal         func_120A30
    ctx->pc = 0x12474Cu;
    SET_GPR_U32(ctx, 31, 0x124754u);
    ctx->pc = 0x124750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12474Cu;
    // 0x124750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x12474Cu, 0x124754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124754u;
label_124754:
    // 0x124754: 0xae200204  sw          $zero, 0x204($s1)
    ctx->pc = 0x124754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 0));
    // 0x124758: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x124758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12475c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x12475cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x124760: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x124760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x124764: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x124764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x124768: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x124768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12476c: 0x3e00008  jr          $ra
    ctx->pc = 0x12476Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12476Cu;
        // 0x124770: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12476Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124774u;
    // 0x124774: 0x0  nop
    ctx->pc = 0x124774u;
    // NOP
    ctx->pc = 0x124778u;
}
