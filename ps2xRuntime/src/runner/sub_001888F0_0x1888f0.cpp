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

// Function: sub_001888F0
// Address: 0x1888f0 - 0x1889d0
void sub_001888F0_0x1888f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001888F0_0x1888f0");
#endif

    switch (ctx->pc) {
        case 0x1888f0u: goto label_1888f0;
        case 0x1888f4u: goto label_1888f4;
        case 0x1888f8u: goto label_1888f8;
        case 0x1888fcu: goto label_1888fc;
        case 0x188900u: goto label_188900;
        case 0x188904u: goto label_188904;
        case 0x188908u: goto label_188908;
        case 0x18890cu: goto label_18890c;
        case 0x188910u: goto label_188910;
        case 0x188914u: goto label_188914;
        case 0x188918u: goto label_188918;
        case 0x18891cu: goto label_18891c;
        case 0x188920u: goto label_188920;
        case 0x188924u: goto label_188924;
        case 0x188928u: goto label_188928;
        case 0x18892cu: goto label_18892c;
        case 0x188930u: goto label_188930;
        case 0x188934u: goto label_188934;
        case 0x188938u: goto label_188938;
        case 0x18893cu: goto label_18893c;
        case 0x188940u: goto label_188940;
        case 0x188944u: goto label_188944;
        case 0x188948u: goto label_188948;
        case 0x18894cu: goto label_18894c;
        case 0x188950u: goto label_188950;
        case 0x188954u: goto label_188954;
        case 0x188958u: goto label_188958;
        case 0x18895cu: goto label_18895c;
        case 0x188960u: goto label_188960;
        case 0x188964u: goto label_188964;
        case 0x188968u: goto label_188968;
        case 0x18896cu: goto label_18896c;
        case 0x188970u: goto label_188970;
        case 0x188974u: goto label_188974;
        case 0x188978u: goto label_188978;
        case 0x18897cu: goto label_18897c;
        case 0x188980u: goto label_188980;
        case 0x188984u: goto label_188984;
        case 0x188988u: goto label_188988;
        case 0x18898cu: goto label_18898c;
        case 0x188990u: goto label_188990;
        case 0x188994u: goto label_188994;
        case 0x188998u: goto label_188998;
        case 0x18899cu: goto label_18899c;
        case 0x1889a0u: goto label_1889a0;
        case 0x1889a4u: goto label_1889a4;
        case 0x1889a8u: goto label_1889a8;
        case 0x1889acu: goto label_1889ac;
        case 0x1889b0u: goto label_1889b0;
        case 0x1889b4u: goto label_1889b4;
        case 0x1889b8u: goto label_1889b8;
        case 0x1889bcu: goto label_1889bc;
        case 0x1889c0u: goto label_1889c0;
        case 0x1889c4u: goto label_1889c4;
        case 0x1889c8u: goto label_1889c8;
        case 0x1889ccu: goto label_1889cc;
        default: break;
    }

    ctx->pc = 0x1888f0u;

label_1888f0:
    // 0x1888f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1888f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1888f4:
    // 0x1888f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1888f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1888f8:
    // 0x1888f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1888f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1888fc:
    // 0x1888fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1888fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188900:
    // 0x188900: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x188900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_188904:
    // 0x188904: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_188908:
    if (ctx->pc == 0x188908u) {
        ctx->pc = 0x188908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188904u;
        // 0x188908: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18890Cu;
        goto label_18890c;
    }
    ctx->pc = 0x188904u;
    {
        const bool branch_taken_0x188904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x188908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188904u;
        // 0x188908: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188904) {
            ctx->pc = 0x18891Cu;
            goto label_18891c;
        }
    }
    ctx->pc = 0x18890Cu;
label_18890c:
    // 0x18890c: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18890cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
label_188910:
    // 0x188910: 0x24c688e8  addiu       $a2, $a2, -0x7718
    ctx->pc = 0x188910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936808));
label_188914:
    // 0x188914: 0xc0621b6  jal         func_1886D8
label_188918:
    if (ctx->pc == 0x188918u) {
        ctx->pc = 0x188918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188914u;
        // 0x188918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18891Cu;
        goto label_18891c;
    }
    ctx->pc = 0x188914u;
    SET_GPR_U32(ctx, 31, 0x18891Cu);
    ctx->pc = 0x188918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188914u;
    // 0x188918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1886D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1886D8u, 0x188914u, 0x18891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18891Cu;
label_18891c:
    // 0x18891c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x18891cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_188920:
    // 0x188920: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x188920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_188924:
    // 0x188924: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x188924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_188928:
    // 0x188928: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x188928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18892c:
    // 0x18892c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_188930:
    // 0x188930: 0x40f809  jalr        $v0
label_188934:
    if (ctx->pc == 0x188934u) {
        ctx->pc = 0x188934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188930u;
        // 0x188934: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188938u;
        goto label_188938;
    }
    ctx->pc = 0x188930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188938u);
        ctx->pc = 0x188934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188930u;
        // 0x188934: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188930u, 0x188938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188938u;
label_188938:
    // 0x188938: 0x10000006  b           . + 4 + (0x6 << 2)
label_18893c:
    if (ctx->pc == 0x18893Cu) {
        ctx->pc = 0x18893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188938u;
        // 0x18893c: 0x245200c8  addiu       $s2, $v0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188940u;
        goto label_188940;
    }
    ctx->pc = 0x188938u;
    {
        const bool branch_taken_0x188938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188938u;
        // 0x18893c: 0x245200c8  addiu       $s2, $v0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188938) {
            ctx->pc = 0x188954u;
            goto label_188954;
        }
    }
    ctx->pc = 0x188940u;
label_188940:
    // 0x188940: 0xc062a60  jal         func_18A980
label_188944:
    if (ctx->pc == 0x188944u) {
        ctx->pc = 0x188944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188940u;
        // 0x188944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188948u;
        goto label_188948;
    }
    ctx->pc = 0x188940u;
    SET_GPR_U32(ctx, 31, 0x188948u);
    ctx->pc = 0x188944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188940u;
    // 0x188944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x188940u, 0x188948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188948u;
label_188948:
    // 0x188948: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x188948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_18894c:
    // 0x18894c: 0xc103e28  jal         func_40F8A0
label_188950:
    if (ctx->pc == 0x188950u) {
        ctx->pc = 0x188950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18894Cu;
        // 0x188950: 0x8c6447c4  lw          $a0, 0x47C4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188954u;
        goto label_188954;
    }
    ctx->pc = 0x18894Cu;
    SET_GPR_U32(ctx, 31, 0x188954u);
    ctx->pc = 0x188950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18894Cu;
    // 0x188950: 0x8c6447c4  lw          $a0, 0x47C4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x18894Cu, 0x188954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188954u;
label_188954:
    // 0x188954: 0xc0621ee  jal         func_1887B8
label_188958:
    if (ctx->pc == 0x188958u) {
        ctx->pc = 0x188958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188954u;
        // 0x188958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18895Cu;
        goto label_18895c;
    }
    ctx->pc = 0x188954u;
    SET_GPR_U32(ctx, 31, 0x18895Cu);
    ctx->pc = 0x188958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188954u;
    // 0x188958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B8u, 0x188954u, 0x18895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18895Cu;
label_18895c:
    // 0x18895c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_188960:
    if (ctx->pc == 0x188960u) {
        ctx->pc = 0x188960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18895Cu;
        // 0x188960: 0x8e05b8b8  lw          $a1, -0x4748($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188964u;
        goto label_188964;
    }
    ctx->pc = 0x18895Cu;
    {
        const bool branch_taken_0x18895c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18895Cu;
        // 0x188960: 0x8e05b8b8  lw          $a1, -0x4748($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18895c) {
            ctx->pc = 0x188984u;
            goto label_188984;
        }
    }
    ctx->pc = 0x188964u;
label_188964:
    // 0x188964: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x188964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_188968:
    // 0x188968: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x188968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18896c:
    // 0x18896c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_188970:
    // 0x188970: 0x40f809  jalr        $v0
label_188974:
    if (ctx->pc == 0x188974u) {
        ctx->pc = 0x188974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188970u;
        // 0x188974: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188978u;
        goto label_188978;
    }
    ctx->pc = 0x188970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188978u);
        ctx->pc = 0x188974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188970u;
        // 0x188974: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188970u, 0x188978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188978u;
label_188978:
    // 0x188978: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x188978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_18897c:
    // 0x18897c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_188980:
    if (ctx->pc == 0x188980u) {
        ctx->pc = 0x188984u;
        goto label_188984;
    }
    ctx->pc = 0x18897Cu;
    {
        const bool branch_taken_0x18897c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18897c) {
            ctx->pc = 0x188940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188940;
        }
    }
    ctx->pc = 0x188984u;
label_188984:
    // 0x188984: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x188984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_188988:
    // 0x188988: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x188988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18898c:
    // 0x18898c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18898cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_188990:
    // 0x188990: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x188990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_188994:
    // 0x188994: 0x40f809  jalr        $v0
label_188998:
    if (ctx->pc == 0x188998u) {
        ctx->pc = 0x188998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188994u;
        // 0x188998: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18899Cu;
        goto label_18899c;
    }
    ctx->pc = 0x188994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18899Cu);
        ctx->pc = 0x188998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188994u;
        // 0x188998: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188994u, 0x18899Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18899Cu;
label_18899c:
    // 0x18899c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x18899cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1889a0:
    // 0x1889a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1889a4:
    if (ctx->pc == 0x1889A4u) {
        ctx->pc = 0x1889A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889A0u;
        // 0x1889a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889A8u;
        goto label_1889a8;
    }
    ctx->pc = 0x1889A0u;
    {
        const bool branch_taken_0x1889a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1889A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889A0u;
        // 0x1889a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889a0) {
            ctx->pc = 0x1889B4u;
            goto label_1889b4;
        }
    }
    ctx->pc = 0x1889A8u;
label_1889a8:
    // 0x1889a8: 0xc06221e  jal         func_188878
label_1889ac:
    if (ctx->pc == 0x1889ACu) {
        ctx->pc = 0x1889ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889A8u;
        // 0x1889ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889B0u;
        goto label_1889b0;
    }
    ctx->pc = 0x1889A8u;
    SET_GPR_U32(ctx, 31, 0x1889B0u);
    ctx->pc = 0x1889ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1889A8u;
    // 0x1889ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188878u, 0x1889A8u, 0x1889B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1889B0u;
label_1889b0:
    // 0x1889b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1889b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1889b4:
    // 0x1889b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1889b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1889b8:
    // 0x1889b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1889b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1889bc:
    // 0x1889bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1889bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1889c0:
    // 0x1889c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1889c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1889c4:
    // 0x1889c4: 0x3e00008  jr          $ra
label_1889c8:
    if (ctx->pc == 0x1889C8u) {
        ctx->pc = 0x1889C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889C4u;
        // 0x1889c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889CCu;
        goto label_1889cc;
    }
    ctx->pc = 0x1889C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1889C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889C4u;
        // 0x1889c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1889C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1889CCu;
label_1889cc:
    // 0x1889cc: 0x0  nop
    ctx->pc = 0x1889ccu;
    // NOP
    ctx->pc = 0x1889d0u;
}
