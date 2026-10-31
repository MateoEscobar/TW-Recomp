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

// Function: sub_00373930
// Address: 0x373930 - 0x3739a8
void sub_00373930_0x373930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373930_0x373930");
#endif

    switch (ctx->pc) {
        case 0x373958u: goto label_373958;
        case 0x373960u: goto label_373960;
        case 0x373978u: goto label_373978;
        case 0x373980u: goto label_373980;
        case 0x37398cu: goto label_37398c;
        default: break;
    }

    ctx->pc = 0x373930u;

    // 0x373930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x373934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373938: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37393c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37393cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x373940: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x373940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373944: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x373944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373948: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x373948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37394c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37394cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373950: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373950u;
    SET_GPR_U32(ctx, 31, 0x373958u);
    ctx->pc = 0x373954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373950u;
    // 0x373954: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373950u, 0x373958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373958u;
label_373958:
    // 0x373958: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373958u;
    SET_GPR_U32(ctx, 31, 0x373960u);
    ctx->pc = 0x37395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373958u;
    // 0x37395c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373958u, 0x373960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373960u;
label_373960:
    // 0x373960: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x373960u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x373964: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373968: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x373968u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x37396c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37396cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373970: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373970u;
    SET_GPR_U32(ctx, 31, 0x373978u);
    ctx->pc = 0x373974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373970u;
    // 0x373974: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373970u, 0x373978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373978u;
label_373978:
    // 0x373978: 0xc10b108  jal         func_42C420
    ctx->pc = 0x373978u;
    SET_GPR_U32(ctx, 31, 0x373980u);
    ctx->pc = 0x37397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373978u;
    // 0x37397c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x373978u, 0x373980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373980u;
label_373980:
    // 0x373980: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373984: 0xc05aa1c  jal         func_16A870
    ctx->pc = 0x373984u;
    SET_GPR_U32(ctx, 31, 0x37398Cu);
    ctx->pc = 0x373988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373984u;
    // 0x373988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A870u, 0x373984u, 0x37398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37398Cu;
label_37398c:
    // 0x37398c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37398cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373990: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373994: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x373994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373998: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x373998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37399c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37399cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3739a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3739A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3739A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739A0u;
        // 0x3739a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3739A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3739A8u;
}
