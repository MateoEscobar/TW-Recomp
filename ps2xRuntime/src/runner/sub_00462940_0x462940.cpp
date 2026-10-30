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

// Function: sub_00462940
// Address: 0x462940 - 0x4629e8
void sub_00462940_0x462940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462940_0x462940");
#endif

    switch (ctx->pc) {
        case 0x462964u: goto label_462964;
        case 0x462994u: goto label_462994;
        case 0x4629b8u: goto label_4629b8;
        default: break;
    }

    ctx->pc = 0x462940u;

    // 0x462940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x462940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x462944: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x462944u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x462948: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x462948u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x46294c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46294cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x462950: 0x24c62a08  addiu       $a2, $a2, 0x2A08
    ctx->pc = 0x462950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10760));
    // 0x462954: 0x24e72ad8  addiu       $a3, $a3, 0x2AD8
    ctx->pc = 0x462954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10968));
    // 0x462958: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x462958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46295c: 0xc120d9a  jal         func_483668
    ctx->pc = 0x46295Cu;
    SET_GPR_U32(ctx, 31, 0x462964u);
    ctx->pc = 0x462960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46295Cu;
    // 0x462960: 0x2405011e  addiu       $a1, $zero, 0x11E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x46295Cu, 0x462964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462964u;
label_462964:
    // 0x462964: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x462964u;
    {
        const bool branch_taken_0x462964 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x462968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462964u;
        // 0x462968: 0x3c060046  lui         $a2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462964) {
            ctx->pc = 0x462974u;
            goto label_462974;
        }
    }
    ctx->pc = 0x46296Cu;
    // 0x46296c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x46296Cu;
    {
        const bool branch_taken_0x46296c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x462970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46296Cu;
        // 0x462970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46296c) {
            ctx->pc = 0x4629D0u;
            goto label_4629d0;
        }
    }
    ctx->pc = 0x462974u;
label_462974:
    // 0x462974: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x462974u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x462978: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x462978u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x46297c: 0x24c62b10  addiu       $a2, $a2, 0x2B10
    ctx->pc = 0x46297cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11024));
    // 0x462980: 0x24e72b30  addiu       $a3, $a3, 0x2B30
    ctx->pc = 0x462980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11056));
    // 0x462984: 0x2405011e  addiu       $a1, $zero, 0x11E
    ctx->pc = 0x462984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x462988: 0x25082bc0  addiu       $t0, $t0, 0x2BC0
    ctx->pc = 0x462988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11200));
    // 0x46298c: 0xc1210c8  jal         func_484320
    ctx->pc = 0x46298Cu;
    SET_GPR_U32(ctx, 31, 0x462994u);
    ctx->pc = 0x462990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46298Cu;
    // 0x462990: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484320u, 0x46298Cu, 0x462994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462994u;
label_462994:
    // 0x462994: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x462994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x462998: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x462998u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x46299c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x46299cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x4629a0: 0xaf828890  sw          $v0, -0x7770($gp)
    ctx->pc = 0x4629a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936720), GPR_U32(ctx, 2));
    // 0x4629a4: 0x24a524a0  addiu       $a1, $a1, 0x24A0
    ctx->pc = 0x4629a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
    // 0x4629a8: 0x24c62338  addiu       $a2, $a2, 0x2338
    ctx->pc = 0x4629a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9016));
    // 0x4629ac: 0x24e72cc8  addiu       $a3, $a3, 0x2CC8
    ctx->pc = 0x4629acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11464));
    // 0x4629b0: 0xc120344  jal         func_480D10
    ctx->pc = 0x4629B0u;
    SET_GPR_U32(ctx, 31, 0x4629B8u);
    ctx->pc = 0x4629B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4629B0u;
    // 0x4629b4: 0x2404011e  addiu       $a0, $zero, 0x11E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480D10u, 0x4629B0u, 0x4629B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4629B8u;
label_4629b8:
    // 0x4629b8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4629B8u;
    {
        const bool branch_taken_0x4629b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4629BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4629B8u;
        // 0x4629bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4629b8) {
            ctx->pc = 0x4629CCu;
            goto label_4629cc;
        }
    }
    ctx->pc = 0x4629C0u;
    // 0x4629c0: 0x8f828890  lw          $v0, -0x7770($gp)
    ctx->pc = 0x4629c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936720)));
    // 0x4629c4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x4629c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4629c8: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x4629c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4629cc:
    // 0x4629cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4629ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4629d0:
    // 0x4629d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4629d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4629d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4629D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4629D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4629D4u;
        // 0x4629d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4629D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4629DCu;
    // 0x4629dc: 0x0  nop
    ctx->pc = 0x4629dcu;
    // NOP
    // 0x4629e0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4629e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4629e4: 0x0  nop
    ctx->pc = 0x4629e4u;
    // NOP
    ctx->pc = 0x4629e8u;
}
