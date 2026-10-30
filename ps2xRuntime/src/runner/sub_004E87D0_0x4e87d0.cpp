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

// Function: sub_004E87D0
// Address: 0x4e87d0 - 0x4e8850
void sub_004E87D0_0x4e87d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E87D0_0x4e87d0");
#endif

    switch (ctx->pc) {
        case 0x4e87d0u: goto label_4e87d0;
        case 0x4e87d4u: goto label_4e87d4;
        case 0x4e87d8u: goto label_4e87d8;
        case 0x4e87dcu: goto label_4e87dc;
        case 0x4e87e0u: goto label_4e87e0;
        case 0x4e87e4u: goto label_4e87e4;
        case 0x4e87e8u: goto label_4e87e8;
        case 0x4e87ecu: goto label_4e87ec;
        case 0x4e87f0u: goto label_4e87f0;
        case 0x4e87f4u: goto label_4e87f4;
        case 0x4e87f8u: goto label_4e87f8;
        case 0x4e87fcu: goto label_4e87fc;
        case 0x4e8800u: goto label_4e8800;
        case 0x4e8804u: goto label_4e8804;
        case 0x4e8808u: goto label_4e8808;
        case 0x4e880cu: goto label_4e880c;
        case 0x4e8810u: goto label_4e8810;
        case 0x4e8814u: goto label_4e8814;
        case 0x4e8818u: goto label_4e8818;
        case 0x4e881cu: goto label_4e881c;
        case 0x4e8820u: goto label_4e8820;
        case 0x4e8824u: goto label_4e8824;
        case 0x4e8828u: goto label_4e8828;
        case 0x4e882cu: goto label_4e882c;
        case 0x4e8830u: goto label_4e8830;
        case 0x4e8834u: goto label_4e8834;
        case 0x4e8838u: goto label_4e8838;
        case 0x4e883cu: goto label_4e883c;
        case 0x4e8840u: goto label_4e8840;
        case 0x4e8844u: goto label_4e8844;
        case 0x4e8848u: goto label_4e8848;
        case 0x4e884cu: goto label_4e884c;
        default: break;
    }

    ctx->pc = 0x4e87d0u;

label_4e87d0:
    // 0x4e87d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e87d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e87d4:
    // 0x4e87d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e87d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e87d8:
    // 0x4e87d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e87d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e87dc:
    // 0x4e87dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e87dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e87e0:
    // 0x4e87e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e87e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e87e4:
    // 0x4e87e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e87e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e87e8:
    // 0x4e87e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e87e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e87ec:
    // 0x4e87ec: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e87f0:
    if (ctx->pc == 0x4E87F0u) {
        ctx->pc = 0x4E87F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E87ECu;
        // 0x4e87f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E87F4u;
        goto label_4e87f4;
    }
    ctx->pc = 0x4E87ECu;
    {
        const bool branch_taken_0x4e87ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E87F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E87ECu;
        // 0x4e87f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e87ec) {
            ctx->pc = 0x4E8834u;
            goto label_4e8834;
        }
    }
    ctx->pc = 0x4E87F4u;
label_4e87f4:
    // 0x4e87f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e87f8:
    // 0x4e87f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e87f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e87fc:
    // 0x4e87fc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e87fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e8800:
    // 0x4e8800: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e8800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e8804:
    // 0x4e8804: 0x60f809  jalr        $v1
label_4e8808:
    if (ctx->pc == 0x4E8808u) {
        ctx->pc = 0x4E8808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8804u;
        // 0x4e8808: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E880Cu;
        goto label_4e880c;
    }
    ctx->pc = 0x4E8804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E880Cu);
        ctx->pc = 0x4E8808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8804u;
        // 0x4e8808: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8804u, 0x4E880Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E880Cu;
label_4e880c:
    // 0x4e880c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e8810:
    // 0x4e8810: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e8810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e8814:
    // 0x4e8814: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e8814u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e8818:
    // 0x4e8818: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e8818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e881c:
    // 0x4e881c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e881cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e8820:
    // 0x4e8820: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e8820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e8824:
    // 0x4e8824: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e8824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e8828:
    // 0x4e8828: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e8828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e882c:
    // 0x4e882c: 0x60f809  jalr        $v1
label_4e8830:
    if (ctx->pc == 0x4E8830u) {
        ctx->pc = 0x4E8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E882Cu;
        // 0x4e8830: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8834u;
        goto label_4e8834;
    }
    ctx->pc = 0x4E882Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E8834u);
        ctx->pc = 0x4E8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E882Cu;
        // 0x4e8830: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E882Cu, 0x4E8834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E8834u;
label_4e8834:
    // 0x4e8834: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e8834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e8838:
    // 0x4e8838: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e8838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e883c:
    // 0x4e883c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e883cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e8840:
    // 0x4e8840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e8840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e8844:
    // 0x4e8844: 0x3e00008  jr          $ra
label_4e8848:
    if (ctx->pc == 0x4E8848u) {
        ctx->pc = 0x4E8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8844u;
        // 0x4e8848: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E884Cu;
        goto label_4e884c;
    }
    ctx->pc = 0x4E8844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8844u;
        // 0x4e8848: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E884Cu;
label_4e884c:
    // 0x4e884c: 0x0  nop
    ctx->pc = 0x4e884cu;
    // NOP
    ctx->pc = 0x4e8850u;
}
