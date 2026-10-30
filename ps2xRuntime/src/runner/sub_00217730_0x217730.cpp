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

// Function: sub_00217730
// Address: 0x217730 - 0x217788
void sub_00217730_0x217730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217730_0x217730");
#endif

    switch (ctx->pc) {
        case 0x217730u: goto label_217730;
        case 0x217734u: goto label_217734;
        case 0x217738u: goto label_217738;
        case 0x21773cu: goto label_21773c;
        case 0x217740u: goto label_217740;
        case 0x217744u: goto label_217744;
        case 0x217748u: goto label_217748;
        case 0x21774cu: goto label_21774c;
        case 0x217750u: goto label_217750;
        case 0x217754u: goto label_217754;
        case 0x217758u: goto label_217758;
        case 0x21775cu: goto label_21775c;
        case 0x217760u: goto label_217760;
        case 0x217764u: goto label_217764;
        case 0x217768u: goto label_217768;
        case 0x21776cu: goto label_21776c;
        case 0x217770u: goto label_217770;
        case 0x217774u: goto label_217774;
        case 0x217778u: goto label_217778;
        case 0x21777cu: goto label_21777c;
        case 0x217780u: goto label_217780;
        case 0x217784u: goto label_217784;
        default: break;
    }

    ctx->pc = 0x217730u;

label_217730:
    // 0x217730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_217734:
    // 0x217734: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x217734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_217738:
    // 0x217738: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x217738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_21773c:
    // 0x21773c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21773cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_217740:
    // 0x217740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_217744:
    // 0x217744: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x217744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_217748:
    // 0x217748: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x217748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_21774c:
    // 0x21774c: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x21774cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_217750:
    // 0x217750: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x217750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_217754:
    // 0x217754: 0x40f809  jalr        $v0
label_217758:
    if (ctx->pc == 0x217758u) {
        ctx->pc = 0x217758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217754u;
        // 0x217758: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21775Cu;
        goto label_21775c;
    }
    ctx->pc = 0x217754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21775Cu);
        ctx->pc = 0x217758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217754u;
        // 0x217758: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217754u, 0x21775Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21775Cu;
label_21775c:
    // 0x21775c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x21775cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_217760:
    // 0x217760: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x217760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217764:
    // 0x217764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x217764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_217768:
    // 0x217768: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x217768u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_21776c:
    // 0x21776c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x21776cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_217770:
    // 0x217770: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x217770u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_217774:
    // 0x217774: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x217774u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_217778:
    // 0x217778: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x217778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21777c:
    // 0x21777c: 0x3e00008  jr          $ra
label_217780:
    if (ctx->pc == 0x217780u) {
        ctx->pc = 0x217780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21777Cu;
        // 0x217780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217784u;
        goto label_217784;
    }
    ctx->pc = 0x21777Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21777Cu;
        // 0x217780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21777Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217784u;
label_217784:
    // 0x217784: 0x0  nop
    ctx->pc = 0x217784u;
    // NOP
    ctx->pc = 0x217788u;
}
