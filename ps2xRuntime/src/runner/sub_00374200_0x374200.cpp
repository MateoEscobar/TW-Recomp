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

// Function: sub_00374200
// Address: 0x374200 - 0x374288
void sub_00374200_0x374200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374200_0x374200");
#endif

    switch (ctx->pc) {
        case 0x374224u: goto label_374224;
        case 0x37422cu: goto label_37422c;
        case 0x374244u: goto label_374244;
        case 0x374258u: goto label_374258;
        case 0x374268u: goto label_374268;
        default: break;
    }

    ctx->pc = 0x374200u;

    // 0x374200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x374200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x374204: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374208: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x374208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37420c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37420cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374210: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x374210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x374214: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x374214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x374218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37421c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37421Cu;
    SET_GPR_U32(ctx, 31, 0x374224u);
    ctx->pc = 0x374220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37421Cu;
    // 0x374220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37421Cu, 0x374224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374224u;
label_374224:
    // 0x374224: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374224u;
    SET_GPR_U32(ctx, 31, 0x37422Cu);
    ctx->pc = 0x374228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374224u;
    // 0x374228: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374224u, 0x37422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37422Cu;
label_37422c:
    // 0x37422c: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x37422cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x374230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x374230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374234: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x374234u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x374238: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x374238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37423c: 0xc102488  jal         func_409220
    ctx->pc = 0x37423Cu;
    SET_GPR_U32(ctx, 31, 0x374244u);
    ctx->pc = 0x374240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37423Cu;
    // 0x374240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37423Cu, 0x374244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374244u;
label_374244:
    // 0x374244: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x374244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x374248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37424c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37424cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x374250: 0xc1024c6  jal         func_409318
    ctx->pc = 0x374250u;
    SET_GPR_U32(ctx, 31, 0x374258u);
    ctx->pc = 0x374254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374250u;
    // 0x374254: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x374250u, 0x374258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374258u;
label_374258:
    // 0x374258: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x374258u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37425c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37425cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374260: 0xc05ac1c  jal         func_16B070
    ctx->pc = 0x374260u;
    SET_GPR_U32(ctx, 31, 0x374268u);
    ctx->pc = 0x374264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374260u;
    // 0x374264: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B070u, 0x374260u, 0x374268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374268u;
label_374268:
    // 0x374268: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x374268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37426c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37426cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374270: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x374270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374274: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x374274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37427c: 0x3e00008  jr          $ra
    ctx->pc = 0x37427Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37427Cu;
        // 0x374280: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37427Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374284u;
    // 0x374284: 0x0  nop
    ctx->pc = 0x374284u;
    // NOP
    ctx->pc = 0x374288u;
}
