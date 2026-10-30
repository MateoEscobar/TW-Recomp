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

// Function: sub_0035F1F8
// Address: 0x35f1f8 - 0x35f278
void sub_0035F1F8_0x35f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F1F8_0x35f1f8");
#endif

    switch (ctx->pc) {
        case 0x35f220u: goto label_35f220;
        case 0x35f228u: goto label_35f228;
        case 0x35f240u: goto label_35f240;
        case 0x35f248u: goto label_35f248;
        case 0x35f258u: goto label_35f258;
        default: break;
    }

    ctx->pc = 0x35f1f8u;

    // 0x35f1f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35f1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35f1fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f200: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35f200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35f204: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35f204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35f208: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35f208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f20c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35f20cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f210: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35f210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35f214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f218: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F218u;
    SET_GPR_U32(ctx, 31, 0x35F220u);
    ctx->pc = 0x35F21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F218u;
    // 0x35f21c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F218u, 0x35F220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F220u;
label_35f220:
    // 0x35f220: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F220u;
    SET_GPR_U32(ctx, 31, 0x35F228u);
    ctx->pc = 0x35F224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F220u;
    // 0x35f224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F220u, 0x35F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F228u;
label_35f228:
    // 0x35f228: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x35f228u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f22c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35f22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f230: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x35f230u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x35f234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35f234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f238: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F238u;
    SET_GPR_U32(ctx, 31, 0x35F240u);
    ctx->pc = 0x35F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F238u;
    // 0x35f23c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F238u, 0x35F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F240u;
label_35f240:
    // 0x35f240: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F240u;
    SET_GPR_U32(ctx, 31, 0x35F248u);
    ctx->pc = 0x35F244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F240u;
    // 0x35f244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F240u, 0x35F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F248u;
label_35f248:
    // 0x35f248: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35f248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f250: 0xc05acf4  jal         func_16B3D0
    ctx->pc = 0x35F250u;
    SET_GPR_U32(ctx, 31, 0x35F258u);
    ctx->pc = 0x35F254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F250u;
    // 0x35f254: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B3D0u, 0x35F250u, 0x35F258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F258u;
label_35f258:
    // 0x35f258: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35f258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f25c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f25cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f260: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35f260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f264: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35f264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f26c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F26Cu;
        // 0x35f270: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F274u;
    // 0x35f274: 0x0  nop
    ctx->pc = 0x35f274u;
    // NOP
    ctx->pc = 0x35f278u;
}
