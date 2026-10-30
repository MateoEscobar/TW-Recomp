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

// Function: sub_001F7308
// Address: 0x1f7308 - 0x1f73b8
void sub_001F7308_0x1f7308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7308_0x1f7308");
#endif

    switch (ctx->pc) {
        case 0x1f733cu: goto label_1f733c;
        case 0x1f734cu: goto label_1f734c;
        case 0x1f7364u: goto label_1f7364;
        case 0x1f7374u: goto label_1f7374;
        case 0x1f7380u: goto label_1f7380;
        case 0x1f738cu: goto label_1f738c;
        case 0x1f7394u: goto label_1f7394;
        default: break;
    }

    ctx->pc = 0x1f7308u;

    // 0x1f7308: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f7308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f730c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1f730cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1f7310: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f7310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f7314: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f7314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f7318: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f7318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f731c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f731cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f7320: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f7320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7328: 0x2452ef80  addiu       $s2, $v0, -0x1080
    ctx->pc = 0x1f7328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
    // 0x1f732c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f732cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7330: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x1f7330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1f7334: 0xc080ada  jal         func_202B68
    ctx->pc = 0x1F7334u;
    SET_GPR_U32(ctx, 31, 0x1F733Cu);
    ctx->pc = 0x1F7338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7334u;
    // 0x1f7338: 0xac6000c4  sw          $zero, 0xC4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B68u, 0x1F7334u, 0x1F733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F733Cu;
label_1f733c:
    // 0x1f733c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F733Cu;
    {
        const bool branch_taken_0x1f733c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f733c) {
            ctx->pc = 0x1F7340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F733Cu;
            // 0x1f7340: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F73A0u;
            goto label_1f73a0;
        }
    }
    ctx->pc = 0x1F7344u;
    // 0x1f7344: 0xc080ada  jal         func_202B68
    ctx->pc = 0x1F7344u;
    SET_GPR_U32(ctx, 31, 0x1F734Cu);
    ctx->pc = 0x1F7348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7344u;
    // 0x1f7348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B68u, 0x1F7344u, 0x1F734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F734Cu;
label_1f734c:
    // 0x1f734c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1f734cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f7350: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F7350u;
    {
        const bool branch_taken_0x1f7350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7350u;
        // 0x1f7354: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7350) {
            ctx->pc = 0x1F739Cu;
            goto label_1f739c;
        }
    }
    ctx->pc = 0x1F7358u;
    // 0x1f7358: 0xae3000c4  sw          $s0, 0xC4($s1)
    ctx->pc = 0x1f7358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 16));
    // 0x1f735c: 0xc080b12  jal         func_202C48
    ctx->pc = 0x1F735Cu;
    SET_GPR_U32(ctx, 31, 0x1F7364u);
    ctx->pc = 0x1F7360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F735Cu;
    // 0x1f7360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C48u, 0x1F735Cu, 0x1F7364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7364u;
label_1f7364:
    // 0x1f7364: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f7364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f7368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f736c: 0xc080b0a  jal         func_202C28
    ctx->pc = 0x1F736Cu;
    SET_GPR_U32(ctx, 31, 0x1F7374u);
    ctx->pc = 0x1F7370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F736Cu;
    // 0x1f7370: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C28u, 0x1F736Cu, 0x1F7374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7374u;
label_1f7374:
    // 0x1f7374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f7374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7378: 0xc080b32  jal         func_202CC8
    ctx->pc = 0x1F7378u;
    SET_GPR_U32(ctx, 31, 0x1F7380u);
    ctx->pc = 0x1F737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7378u;
    // 0x1f737c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CC8u, 0x1F7378u, 0x1F7380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7380u;
label_1f7380:
    // 0x1f7380: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x1f7380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1f7384: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1F7384u;
    SET_GPR_U32(ctx, 31, 0x1F738Cu);
    ctx->pc = 0x1F7388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7384u;
    // 0x1f7388: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1F7384u, 0x1F738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F738Cu;
label_1f738c:
    // 0x1f738c: 0xc07dc8e  jal         func_1F7238
    ctx->pc = 0x1F738Cu;
    SET_GPR_U32(ctx, 31, 0x1F7394u);
    ctx->pc = 0x1F7390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F738Cu;
    // 0x1f7390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7238u, 0x1F738Cu, 0x1F7394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7394u;
label_1f7394:
    // 0x1f7394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7398: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x1f7398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
label_1f739c:
    // 0x1f739c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f739cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f73a0:
    // 0x1f73a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f73a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f73a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f73a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f73a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f73a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f73ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F73ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73ACu;
        // 0x1f73b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F73ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F73B4u;
    // 0x1f73b4: 0x0  nop
    ctx->pc = 0x1f73b4u;
    // NOP
    ctx->pc = 0x1f73b8u;
}
