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

// Function: sub_0045E8C8
// Address: 0x45e8c8 - 0x45e9a0
void sub_0045E8C8_0x45e8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E8C8_0x45e8c8");
#endif

    switch (ctx->pc) {
        case 0x45e920u: goto label_45e920;
        case 0x45e938u: goto label_45e938;
        default: break;
    }

    ctx->pc = 0x45e8c8u;

    // 0x45e8c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45e8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x45e8cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45e8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45e8d0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x45e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x45e8d4: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x45e8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45e8d8: 0x14e20013  bne         $a3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x45E8D8u;
    {
        const bool branch_taken_0x45e8d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x45E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E8D8u;
        // 0x45e8dc: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e8d8) {
            ctx->pc = 0x45E928u;
            goto label_45e928;
        }
    }
    ctx->pc = 0x45E8E0u;
    // 0x45e8e0: 0xc4630094  lwc1        $f3, 0x94($v1)
    ctx->pc = 0x45e8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45e8e4: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x45e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x45e8e8: 0xc4620090  lwc1        $f2, 0x90($v1)
    ctx->pc = 0x45e8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45e8ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x45e8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e8f0: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x45e8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e8f4: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x45e8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e8f8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45e8fc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x45e8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x45e900: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x45e900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x45e904: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x45e904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x45e908: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x45e908u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x45e90c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x45e90cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45e910: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x45e910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45e914: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x45e914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x45e918: 0xc114212  jal         func_450848
    ctx->pc = 0x45E918u;
    SET_GPR_U32(ctx, 31, 0x45E920u);
    ctx->pc = 0x45E91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45E918u;
    // 0x45e91c: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x450848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450848u, 0x45E918u, 0x45E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E920u;
label_45e920:
    // 0x45e920: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x45E920u;
    {
        const bool branch_taken_0x45e920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E920u;
        // 0x45e924: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e920) {
            ctx->pc = 0x45E994u;
            goto label_45e994;
        }
    }
    ctx->pc = 0x45E928u;
label_45e928:
    // 0x45e928: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45e928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45e92c: 0x24620098  addiu       $v0, $v1, 0x98
    ctx->pc = 0x45e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x45e930: 0x18a00017  blez        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x45E930u;
    {
        const bool branch_taken_0x45e930 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x45E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E930u;
        // 0x45e934: 0x24660090  addiu       $a2, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e930) {
            ctx->pc = 0x45E990u;
            goto label_45e990;
        }
    }
    ctx->pc = 0x45E938u;
label_45e938:
    // 0x45e938: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x45e938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e93c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x45e940: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x45e940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45e944: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x45e944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e948: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x45e948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45e94c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x45e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x45e950: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e954: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45e954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45e958: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x45e958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e95c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45e95cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45e960: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x45e960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x45e964: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45e964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e968: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45e968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45e96c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x45e96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e970: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45e970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45e974: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x45e974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x45e978: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x45e978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e97c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45e97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45e980: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x45e980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e984: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45e984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45e988: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x45E988u;
    {
        const bool branch_taken_0x45e988 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x45E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E988u;
        // 0x45e98c: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e988) {
            ctx->pc = 0x45E938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e938;
        }
    }
    ctx->pc = 0x45E990u;
label_45e990:
    // 0x45e990: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45e990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45e994:
    // 0x45e994: 0x3e00008  jr          $ra
    ctx->pc = 0x45E994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E994u;
        // 0x45e998: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E99Cu;
    // 0x45e99c: 0x0  nop
    ctx->pc = 0x45e99cu;
    // NOP
    ctx->pc = 0x45e9a0u;
}
