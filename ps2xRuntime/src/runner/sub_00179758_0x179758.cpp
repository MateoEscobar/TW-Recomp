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

// Function: sub_00179758
// Address: 0x179758 - 0x1797e8
void sub_00179758_0x179758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179758_0x179758");
#endif

    switch (ctx->pc) {
        case 0x179758u: goto label_179758;
        case 0x17975cu: goto label_17975c;
        case 0x179760u: goto label_179760;
        case 0x179764u: goto label_179764;
        case 0x179768u: goto label_179768;
        case 0x17976cu: goto label_17976c;
        case 0x179770u: goto label_179770;
        case 0x179774u: goto label_179774;
        case 0x179778u: goto label_179778;
        case 0x17977cu: goto label_17977c;
        case 0x179780u: goto label_179780;
        case 0x179784u: goto label_179784;
        case 0x179788u: goto label_179788;
        case 0x17978cu: goto label_17978c;
        case 0x179790u: goto label_179790;
        case 0x179794u: goto label_179794;
        case 0x179798u: goto label_179798;
        case 0x17979cu: goto label_17979c;
        case 0x1797a0u: goto label_1797a0;
        case 0x1797a4u: goto label_1797a4;
        case 0x1797a8u: goto label_1797a8;
        case 0x1797acu: goto label_1797ac;
        case 0x1797b0u: goto label_1797b0;
        case 0x1797b4u: goto label_1797b4;
        case 0x1797b8u: goto label_1797b8;
        case 0x1797bcu: goto label_1797bc;
        case 0x1797c0u: goto label_1797c0;
        case 0x1797c4u: goto label_1797c4;
        case 0x1797c8u: goto label_1797c8;
        case 0x1797ccu: goto label_1797cc;
        case 0x1797d0u: goto label_1797d0;
        case 0x1797d4u: goto label_1797d4;
        case 0x1797d8u: goto label_1797d8;
        case 0x1797dcu: goto label_1797dc;
        case 0x1797e0u: goto label_1797e0;
        case 0x1797e4u: goto label_1797e4;
        default: break;
    }

    ctx->pc = 0x179758u;

label_179758:
    // 0x179758: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x179758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_17975c:
    // 0x17975c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x17975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_179760:
    // 0x179760: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x179760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_179764:
    // 0x179764: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x179764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179768:
    // 0x179768: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x179768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_17976c:
    // 0x17976c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17976cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_179770:
    // 0x179770: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x179770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_179774:
    // 0x179774: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x179774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_179778:
    // 0x179778: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x179778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17977c:
    // 0x17977c: 0xc0e4060  jal         func_390180
label_179780:
    if (ctx->pc == 0x179780u) {
        ctx->pc = 0x179780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17977Cu;
        // 0x179780: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179784u;
        goto label_179784;
    }
    ctx->pc = 0x17977Cu;
    SET_GPR_U32(ctx, 31, 0x179784u);
    ctx->pc = 0x179780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17977Cu;
    // 0x179780: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x17977Cu, 0x179784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179784u;
label_179784:
    // 0x179784: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x179784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179788:
    // 0x179788: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_17978c:
    if (ctx->pc == 0x17978Cu) {
        ctx->pc = 0x17978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179788u;
        // 0x17978c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179790u;
        goto label_179790;
    }
    ctx->pc = 0x179788u;
    {
        const bool branch_taken_0x179788 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179788u;
        // 0x17978c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179788) {
            ctx->pc = 0x1797D0u;
            goto label_1797d0;
        }
    }
    ctx->pc = 0x179790u;
label_179790:
    // 0x179790: 0xc05e3f6  jal         func_178FD8
label_179794:
    if (ctx->pc == 0x179794u) {
        ctx->pc = 0x179798u;
        goto label_179798;
    }
    ctx->pc = 0x179790u;
    SET_GPR_U32(ctx, 31, 0x179798u);
    ctx->pc = 0x178FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178FD8u, 0x179790u, 0x179798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179798u;
label_179798:
    // 0x179798: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x179798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17979c:
    // 0x17979c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x17979cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_1797a0:
    // 0x1797a0: 0x8c5071ac  lw          $s0, 0x71AC($v0)
    ctx->pc = 0x1797a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29100)));
label_1797a4:
    // 0x1797a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1797a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1797a8:
    // 0x1797a8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x1797a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1797ac:
    // 0x1797ac: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x1797acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1797b0:
    // 0x1797b0: 0x40f809  jalr        $v0
label_1797b4:
    if (ctx->pc == 0x1797B4u) {
        ctx->pc = 0x1797B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797B0u;
        // 0x1797b4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1797B8u;
        goto label_1797b8;
    }
    ctx->pc = 0x1797B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1797B8u);
        ctx->pc = 0x1797B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797B0u;
        // 0x1797b4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1797B0u, 0x1797B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1797B8u;
label_1797b8:
    // 0x1797b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1797b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1797bc:
    // 0x1797bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1797bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1797c0:
    // 0x1797c0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1797c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1797c4:
    // 0x1797c4: 0xc05e4c4  jal         func_179310
label_1797c8:
    if (ctx->pc == 0x1797C8u) {
        ctx->pc = 0x1797C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797C4u;
        // 0x1797c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1797CCu;
        goto label_1797cc;
    }
    ctx->pc = 0x1797C4u;
    SET_GPR_U32(ctx, 31, 0x1797CCu);
    ctx->pc = 0x1797C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797C4u;
    // 0x1797c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179310u, 0x1797C4u, 0x1797CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797CCu;
label_1797cc:
    // 0x1797cc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1797ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1797d0:
    // 0x1797d0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1797d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1797d4:
    // 0x1797d4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1797d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1797d8:
    // 0x1797d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1797d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1797dc:
    // 0x1797dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1797dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1797e0:
    // 0x1797e0: 0x3e00008  jr          $ra
label_1797e4:
    if (ctx->pc == 0x1797E4u) {
        ctx->pc = 0x1797E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797E0u;
        // 0x1797e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1797E8u;
        goto label_fallthrough_0x1797e0;
    }
    ctx->pc = 0x1797E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1797E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797E0u;
        // 0x1797e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1797E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1797e0:
    ctx->pc = 0x1797E8u;
}
