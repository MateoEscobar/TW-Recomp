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

// Function: sub_0035F4E0
// Address: 0x35f4e0 - 0x35f558
void sub_0035F4E0_0x35f4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F4E0_0x35f4e0");
#endif

    switch (ctx->pc) {
        case 0x35f508u: goto label_35f508;
        case 0x35f510u: goto label_35f510;
        case 0x35f528u: goto label_35f528;
        case 0x35f530u: goto label_35f530;
        case 0x35f53cu: goto label_35f53c;
        default: break;
    }

    ctx->pc = 0x35f4e0u;

    // 0x35f4e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35f4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35f4e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f4e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35f4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35f4ec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35f4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35f4f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35f4f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f4f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35f4f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f4f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35f4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35f4fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f500: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F500u;
    SET_GPR_U32(ctx, 31, 0x35F508u);
    ctx->pc = 0x35F504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F500u;
    // 0x35f504: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F500u, 0x35F508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F508u;
label_35f508:
    // 0x35f508: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F508u;
    SET_GPR_U32(ctx, 31, 0x35F510u);
    ctx->pc = 0x35F50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F508u;
    // 0x35f50c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F508u, 0x35F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F510u;
label_35f510:
    // 0x35f510: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x35f510u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f514: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35f514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f518: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x35f518u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x35f51c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35f51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f520: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F520u;
    SET_GPR_U32(ctx, 31, 0x35F528u);
    ctx->pc = 0x35F524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F520u;
    // 0x35f524: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F520u, 0x35F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F528u;
label_35f528:
    // 0x35f528: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35F528u;
    SET_GPR_U32(ctx, 31, 0x35F530u);
    ctx->pc = 0x35F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F528u;
    // 0x35f52c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35F528u, 0x35F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F530u;
label_35f530:
    // 0x35f530: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35f530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f534: 0xc05a8ba  jal         func_16A2E8
    ctx->pc = 0x35F534u;
    SET_GPR_U32(ctx, 31, 0x35F53Cu);
    ctx->pc = 0x35F538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F534u;
    // 0x35f538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A2E8u, 0x35F534u, 0x35F53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F53Cu;
label_35f53c:
    // 0x35f53c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35f53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f540: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f544: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35f544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f548: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35f548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f54c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f550: 0x3e00008  jr          $ra
    ctx->pc = 0x35F550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F550u;
        // 0x35f554: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F558u;
}
