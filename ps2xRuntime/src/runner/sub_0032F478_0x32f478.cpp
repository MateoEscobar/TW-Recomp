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

// Function: sub_0032F478
// Address: 0x32f478 - 0x32f538
void sub_0032F478_0x32f478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F478_0x32f478");
#endif

    switch (ctx->pc) {
        case 0x32f4a0u: goto label_32f4a0;
        case 0x32f4b4u: goto label_32f4b4;
        case 0x32f4d0u: goto label_32f4d0;
        case 0x32f4dcu: goto label_32f4dc;
        case 0x32f4e4u: goto label_32f4e4;
        case 0x32f4f0u: goto label_32f4f0;
        case 0x32f4f8u: goto label_32f4f8;
        case 0x32f50cu: goto label_32f50c;
        case 0x32f514u: goto label_32f514;
        case 0x32f520u: goto label_32f520;
        default: break;
    }

    ctx->pc = 0x32f478u;

    // 0x32f478: 0x27bdfaf0  addiu       $sp, $sp, -0x510
    ctx->pc = 0x32f478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966000));
    // 0x32f47c: 0x7fb00500  sq          $s0, 0x500($sp)
    ctx->pc = 0x32f47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 16));
    // 0x32f480: 0x7fb104f0  sq          $s1, 0x4F0($sp)
    ctx->pc = 0x32f480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 17));
    // 0x32f484: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32f484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f488: 0x7fb204e0  sq          $s2, 0x4E0($sp)
    ctx->pc = 0x32f488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 18));
    // 0x32f48c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32f48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f490: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32f490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f494: 0xffbf04d0  sd          $ra, 0x4D0($sp)
    ctx->pc = 0x32f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 31));
    // 0x32f498: 0xc0cb596  jal         func_32D658
    ctx->pc = 0x32F498u;
    SET_GPR_U32(ctx, 31, 0x32F4A0u);
    ctx->pc = 0x32F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F498u;
    // 0x32f49c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D658u, 0x32F498u, 0x32F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F4A0u;
label_32f4a0:
    // 0x32f4a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x32f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f4a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f4a8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x32f4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x32f4ac: 0xc0cb334  jal         func_32CCD0
    ctx->pc = 0x32F4ACu;
    SET_GPR_U32(ctx, 31, 0x32F4B4u);
    ctx->pc = 0x32F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F4ACu;
    // 0x32f4b0: 0xac520038  sw          $s2, 0x38($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CCD0u, 0x32F4ACu, 0x32F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F4B4u;
label_32f4b4:
    // 0x32f4b4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32F4B4u;
    {
        const bool branch_taken_0x32f4b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f4b4) {
            ctx->pc = 0x32F4DCu;
            goto label_32f4dc;
        }
    }
    ctx->pc = 0x32F4BCu;
    // 0x32f4bc: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32f4c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f4c4: 0x24a55ea0  addiu       $a1, $a1, 0x5EA0
    ctx->pc = 0x32f4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24224));
    // 0x32f4c8: 0xc0cb44e  jal         func_32D138
    ctx->pc = 0x32F4C8u;
    SET_GPR_U32(ctx, 31, 0x32F4D0u);
    ctx->pc = 0x32F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F4C8u;
    // 0x32f4cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D138u, 0x32F4C8u, 0x32F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F4D0u;
label_32f4d0:
    // 0x32f4d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f4d4: 0xc0cb41e  jal         func_32D078
    ctx->pc = 0x32F4D4u;
    SET_GPR_U32(ctx, 31, 0x32F4DCu);
    ctx->pc = 0x32F4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F4D4u;
    // 0x32f4d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D078u, 0x32F4D4u, 0x32F4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F4DCu;
label_32f4dc:
    // 0x32f4dc: 0xc0cbce6  jal         func_32F398
    ctx->pc = 0x32F4DCu;
    SET_GPR_U32(ctx, 31, 0x32F4E4u);
    ctx->pc = 0x32F4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F4DCu;
    // 0x32f4e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F398u, 0x32F4DCu, 0x32F4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F4E4u;
label_32f4e4:
    // 0x32f4e4: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x32f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x32f4e8: 0xc0cb334  jal         func_32CCD0
    ctx->pc = 0x32F4E8u;
    SET_GPR_U32(ctx, 31, 0x32F4F0u);
    ctx->pc = 0x32F4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F4E8u;
    // 0x32f4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CCD0u, 0x32F4E8u, 0x32F4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F4F0u;
label_32f4f0:
    // 0x32f4f0: 0xc0cbd4e  jal         func_32F538
    ctx->pc = 0x32F4F0u;
    SET_GPR_U32(ctx, 31, 0x32F4F8u);
    ctx->pc = 0x32F4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F4F0u;
    // 0x32f4f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F538u, 0x32F4F0u, 0x32F4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F4F8u;
label_32f4f8:
    // 0x32f4f8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x32f4f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f4fc: 0x24050106  addiu       $a1, $zero, 0x106
    ctx->pc = 0x32f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x32f500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f504: 0xc0cb358  jal         func_32CD60
    ctx->pc = 0x32F504u;
    SET_GPR_U32(ctx, 31, 0x32F50Cu);
    ctx->pc = 0x32F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F504u;
    // 0x32f508: 0x24060108  addiu       $a2, $zero, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD60u, 0x32F504u, 0x32F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F50Cu;
label_32f50c:
    // 0x32f50c: 0xc0cb5ba  jal         func_32D6E8
    ctx->pc = 0x32F50Cu;
    SET_GPR_U32(ctx, 31, 0x32F514u);
    ctx->pc = 0x32F510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F50Cu;
    // 0x32f510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6E8u, 0x32F50Cu, 0x32F514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F514u;
label_32f514:
    // 0x32f514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f518: 0xc0cb55c  jal         func_32D570
    ctx->pc = 0x32F518u;
    SET_GPR_U32(ctx, 31, 0x32F520u);
    ctx->pc = 0x32F51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F518u;
    // 0x32f51c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D570u, 0x32F518u, 0x32F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F520u;
label_32f520:
    // 0x32f520: 0x7bb00500  lq          $s0, 0x500($sp)
    ctx->pc = 0x32f520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x32f524: 0x7bb104f0  lq          $s1, 0x4F0($sp)
    ctx->pc = 0x32f524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x32f528: 0x7bb204e0  lq          $s2, 0x4E0($sp)
    ctx->pc = 0x32f528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x32f52c: 0xdfbf04d0  ld          $ra, 0x4D0($sp)
    ctx->pc = 0x32f52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x32f530: 0x3e00008  jr          $ra
    ctx->pc = 0x32F530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F530u;
        // 0x32f534: 0x27bd0510  addiu       $sp, $sp, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F538u;
}
