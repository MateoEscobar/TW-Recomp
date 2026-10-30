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

// Function: sub_00306938
// Address: 0x306938 - 0x3069f0
void sub_00306938_0x306938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306938_0x306938");
#endif

    switch (ctx->pc) {
        case 0x306938u: goto label_306938;
        case 0x30693cu: goto label_30693c;
        case 0x306940u: goto label_306940;
        case 0x306944u: goto label_306944;
        case 0x306948u: goto label_306948;
        case 0x30694cu: goto label_30694c;
        case 0x306950u: goto label_306950;
        case 0x306954u: goto label_306954;
        case 0x306958u: goto label_306958;
        case 0x30695cu: goto label_30695c;
        case 0x306960u: goto label_306960;
        case 0x306964u: goto label_306964;
        case 0x306968u: goto label_306968;
        case 0x30696cu: goto label_30696c;
        case 0x306970u: goto label_306970;
        case 0x306974u: goto label_306974;
        case 0x306978u: goto label_306978;
        case 0x30697cu: goto label_30697c;
        case 0x306980u: goto label_306980;
        case 0x306984u: goto label_306984;
        case 0x306988u: goto label_306988;
        case 0x30698cu: goto label_30698c;
        case 0x306990u: goto label_306990;
        case 0x306994u: goto label_306994;
        case 0x306998u: goto label_306998;
        case 0x30699cu: goto label_30699c;
        case 0x3069a0u: goto label_3069a0;
        case 0x3069a4u: goto label_3069a4;
        case 0x3069a8u: goto label_3069a8;
        case 0x3069acu: goto label_3069ac;
        case 0x3069b0u: goto label_3069b0;
        case 0x3069b4u: goto label_3069b4;
        case 0x3069b8u: goto label_3069b8;
        case 0x3069bcu: goto label_3069bc;
        case 0x3069c0u: goto label_3069c0;
        case 0x3069c4u: goto label_3069c4;
        case 0x3069c8u: goto label_3069c8;
        case 0x3069ccu: goto label_3069cc;
        case 0x3069d0u: goto label_3069d0;
        case 0x3069d4u: goto label_3069d4;
        case 0x3069d8u: goto label_3069d8;
        case 0x3069dcu: goto label_3069dc;
        case 0x3069e0u: goto label_3069e0;
        case 0x3069e4u: goto label_3069e4;
        case 0x3069e8u: goto label_3069e8;
        case 0x3069ecu: goto label_3069ec;
        default: break;
    }

    ctx->pc = 0x306938u;

label_306938:
    // 0x306938: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x306938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_30693c:
    // 0x30693c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30693cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_306940:
    // 0x306940: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x306940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_306944:
    // 0x306944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x306944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_306948:
    // 0x306948: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x306948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_30694c:
    // 0x30694c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30694cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_306950:
    // 0x306950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_306954:
    // 0x306954: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x306954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_306958:
    // 0x306958: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_30695c:
    if (ctx->pc == 0x30695Cu) {
        ctx->pc = 0x30695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306958u;
        // 0x30695c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306960u;
        goto label_306960;
    }
    ctx->pc = 0x306958u;
    {
        const bool branch_taken_0x306958 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306958u;
        // 0x30695c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306958) {
            ctx->pc = 0x3069D8u;
            goto label_3069d8;
        }
    }
    ctx->pc = 0x306960u;
label_306960:
    // 0x306960: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x306960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_306964:
    // 0x306964: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x306964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_306968:
    // 0x306968: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x306968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_30696c:
    // 0x30696c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x30696cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_306970:
    // 0x306970: 0x40f809  jalr        $v0
label_306974:
    if (ctx->pc == 0x306974u) {
        ctx->pc = 0x306974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306970u;
        // 0x306974: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306978u;
        goto label_306978;
    }
    ctx->pc = 0x306970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306978u);
        ctx->pc = 0x306974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306970u;
        // 0x306974: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306970u, 0x306978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306978u;
label_306978:
    // 0x306978: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_30697c:
    if (ctx->pc == 0x30697Cu) {
        ctx->pc = 0x30697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306978u;
        // 0x30697c: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306980u;
        goto label_306980;
    }
    ctx->pc = 0x306978u;
    {
        const bool branch_taken_0x306978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306978u;
        // 0x30697c: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306978) {
            ctx->pc = 0x3069D8u;
            goto label_3069d8;
        }
    }
    ctx->pc = 0x306980u;
label_306980:
    // 0x306980: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x306980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_306984:
    // 0x306984: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x306984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_306988:
    // 0x306988: 0x84450030  lh          $a1, 0x30($v0)
    ctx->pc = 0x306988u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_30698c:
    // 0x30698c: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x30698cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_306990:
    // 0x306990: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x306990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_306994:
    // 0x306994: 0x40f809  jalr        $v0
label_306998:
    if (ctx->pc == 0x306998u) {
        ctx->pc = 0x306998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306994u;
        // 0x306998: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30699Cu;
        goto label_30699c;
    }
    ctx->pc = 0x306994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30699Cu);
        ctx->pc = 0x306998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306994u;
        // 0x306998: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306994u, 0x30699Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30699Cu;
label_30699c:
    // 0x30699c: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x30699cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_3069a0:
    // 0x3069a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3069a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3069a4:
    // 0x3069a4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3069a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3069a8:
    // 0x3069a8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x3069a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_3069ac:
    // 0x3069ac: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x3069acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_3069b0:
    // 0x3069b0: 0x60f809  jalr        $v1
label_3069b4:
    if (ctx->pc == 0x3069B4u) {
        ctx->pc = 0x3069B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069B0u;
        // 0x3069b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3069B8u;
        goto label_3069b8;
    }
    ctx->pc = 0x3069B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3069B8u);
        ctx->pc = 0x3069B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069B0u;
        // 0x3069b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3069B0u, 0x3069B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3069B8u;
label_3069b8:
    // 0x3069b8: 0x8e272b04  lw          $a3, 0x2B04($s1)
    ctx->pc = 0x3069b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_3069bc:
    // 0x3069bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3069bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3069c0:
    // 0x3069c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3069c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3069c4:
    // 0x3069c4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3069c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3069c8:
    // 0x3069c8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x3069c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_3069cc:
    // 0x3069cc: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x3069ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3069d0:
    // 0x3069d0: 0x60f809  jalr        $v1
label_3069d4:
    if (ctx->pc == 0x3069D4u) {
        ctx->pc = 0x3069D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069D0u;
        // 0x3069d4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3069D8u;
        goto label_3069d8;
    }
    ctx->pc = 0x3069D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3069D8u);
        ctx->pc = 0x3069D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069D0u;
        // 0x3069d4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3069D0u, 0x3069D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3069D8u;
label_3069d8:
    // 0x3069d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3069d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3069dc:
    // 0x3069dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3069dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3069e0:
    // 0x3069e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3069e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3069e4:
    // 0x3069e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3069e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3069e8:
    // 0x3069e8: 0x3e00008  jr          $ra
label_3069ec:
    if (ctx->pc == 0x3069ECu) {
        ctx->pc = 0x3069ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069E8u;
        // 0x3069ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3069F0u;
        goto label_fallthrough_0x3069e8;
    }
    ctx->pc = 0x3069E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3069ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069E8u;
        // 0x3069ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3069E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3069e8:
    ctx->pc = 0x3069F0u;
}
