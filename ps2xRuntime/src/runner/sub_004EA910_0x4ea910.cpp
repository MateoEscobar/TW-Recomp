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

// Function: sub_004EA910
// Address: 0x4ea910 - 0x4ea990
void sub_004EA910_0x4ea910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA910_0x4ea910");
#endif

    switch (ctx->pc) {
        case 0x4ea910u: goto label_4ea910;
        case 0x4ea914u: goto label_4ea914;
        case 0x4ea918u: goto label_4ea918;
        case 0x4ea91cu: goto label_4ea91c;
        case 0x4ea920u: goto label_4ea920;
        case 0x4ea924u: goto label_4ea924;
        case 0x4ea928u: goto label_4ea928;
        case 0x4ea92cu: goto label_4ea92c;
        case 0x4ea930u: goto label_4ea930;
        case 0x4ea934u: goto label_4ea934;
        case 0x4ea938u: goto label_4ea938;
        case 0x4ea93cu: goto label_4ea93c;
        case 0x4ea940u: goto label_4ea940;
        case 0x4ea944u: goto label_4ea944;
        case 0x4ea948u: goto label_4ea948;
        case 0x4ea94cu: goto label_4ea94c;
        case 0x4ea950u: goto label_4ea950;
        case 0x4ea954u: goto label_4ea954;
        case 0x4ea958u: goto label_4ea958;
        case 0x4ea95cu: goto label_4ea95c;
        case 0x4ea960u: goto label_4ea960;
        case 0x4ea964u: goto label_4ea964;
        case 0x4ea968u: goto label_4ea968;
        case 0x4ea96cu: goto label_4ea96c;
        case 0x4ea970u: goto label_4ea970;
        case 0x4ea974u: goto label_4ea974;
        case 0x4ea978u: goto label_4ea978;
        case 0x4ea97cu: goto label_4ea97c;
        case 0x4ea980u: goto label_4ea980;
        case 0x4ea984u: goto label_4ea984;
        case 0x4ea988u: goto label_4ea988;
        case 0x4ea98cu: goto label_4ea98c;
        default: break;
    }

    ctx->pc = 0x4ea910u;

label_4ea910:
    // 0x4ea910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ea910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ea914:
    // 0x4ea914: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ea914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ea918:
    // 0x4ea918: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ea918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ea91c:
    // 0x4ea91c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ea91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ea920:
    // 0x4ea920: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ea920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ea924:
    // 0x4ea924: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ea924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ea928:
    // 0x4ea928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ea928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ea92c:
    // 0x4ea92c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ea930:
    if (ctx->pc == 0x4EA930u) {
        ctx->pc = 0x4EA930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA92Cu;
        // 0x4ea930: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA934u;
        goto label_4ea934;
    }
    ctx->pc = 0x4EA92Cu;
    {
        const bool branch_taken_0x4ea92c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA92Cu;
        // 0x4ea930: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea92c) {
            ctx->pc = 0x4EA974u;
            goto label_4ea974;
        }
    }
    ctx->pc = 0x4EA934u;
label_4ea934:
    // 0x4ea934: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ea934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ea938:
    // 0x4ea938: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ea938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ea93c:
    // 0x4ea93c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ea93cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ea940:
    // 0x4ea940: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ea940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ea944:
    // 0x4ea944: 0x60f809  jalr        $v1
label_4ea948:
    if (ctx->pc == 0x4EA948u) {
        ctx->pc = 0x4EA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA944u;
        // 0x4ea948: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA94Cu;
        goto label_4ea94c;
    }
    ctx->pc = 0x4EA944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA94Cu);
        ctx->pc = 0x4EA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA944u;
        // 0x4ea948: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA944u, 0x4EA94Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA94Cu;
label_4ea94c:
    // 0x4ea94c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ea94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ea950:
    // 0x4ea950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ea950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ea954:
    // 0x4ea954: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ea954u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ea958:
    // 0x4ea958: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ea958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ea95c:
    // 0x4ea95c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ea95cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ea960:
    // 0x4ea960: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ea960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ea964:
    // 0x4ea964: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ea964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ea968:
    // 0x4ea968: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ea968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ea96c:
    // 0x4ea96c: 0x60f809  jalr        $v1
label_4ea970:
    if (ctx->pc == 0x4EA970u) {
        ctx->pc = 0x4EA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA96Cu;
        // 0x4ea970: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA974u;
        goto label_4ea974;
    }
    ctx->pc = 0x4EA96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA974u);
        ctx->pc = 0x4EA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA96Cu;
        // 0x4ea970: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA96Cu, 0x4EA974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA974u;
label_4ea974:
    // 0x4ea974: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ea974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ea978:
    // 0x4ea978: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ea978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ea97c:
    // 0x4ea97c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ea97cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ea980:
    // 0x4ea980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ea980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ea984:
    // 0x4ea984: 0x3e00008  jr          $ra
label_4ea988:
    if (ctx->pc == 0x4EA988u) {
        ctx->pc = 0x4EA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA984u;
        // 0x4ea988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA98Cu;
        goto label_4ea98c;
    }
    ctx->pc = 0x4EA984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA984u;
        // 0x4ea988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EA98Cu;
label_4ea98c:
    // 0x4ea98c: 0x0  nop
    ctx->pc = 0x4ea98cu;
    // NOP
    ctx->pc = 0x4ea990u;
}
