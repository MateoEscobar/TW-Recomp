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

// Function: sub_00460F80
// Address: 0x460f80 - 0x461258
void sub_00460F80_0x460f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460F80_0x460f80");
#endif

    switch (ctx->pc) {
        case 0x460f90u: goto label_460f90;
        case 0x460fd8u: goto label_460fd8;
        case 0x461058u: goto label_461058;
        case 0x4610d8u: goto label_4610d8;
        case 0x461158u: goto label_461158;
        case 0x4611d0u: goto label_4611d0;
        default: break;
    }

    ctx->pc = 0x460f80u;

    // 0x460f80: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x460f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x460f84: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x460f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x460f88: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x460F88u;
    {
        const bool branch_taken_0x460f88 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x460F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460F88u;
        // 0x460f8c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460f88) {
            ctx->pc = 0x460FB8u;
            goto label_460fb8;
        }
    }
    ctx->pc = 0x460F90u;
label_460f90:
    // 0x460f90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x460f94: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x460f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x460f98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x460f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x460f9c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x460fa0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x460fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x460fa4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x460fa8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x460fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x460fac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x460fb0: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x460FB0u;
    {
        const bool branch_taken_0x460fb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x460FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460FB0u;
        // 0x460fb4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460fb0) {
            ctx->pc = 0x460F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_460f90;
        }
    }
    ctx->pc = 0x460FB8u;
label_460fb8:
    // 0x460fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x460FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x460FC0u;
    // 0x460fc0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x460fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x460fc4: 0x8cc70040  lw          $a3, 0x40($a2)
    ctx->pc = 0x460fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x460fc8: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x460fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x460fcc: 0x18a00019  blez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x460FCCu;
    {
        const bool branch_taken_0x460fcc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x460FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460FCCu;
        // 0x460fd0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460fcc) {
            ctx->pc = 0x461034u;
            goto label_461034;
        }
    }
    ctx->pc = 0x460FD4u;
    // 0x460fd4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x460fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_460fd8:
    // 0x460fd8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x460fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x460fdc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x460fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x460fe0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x460fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460fe4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x460fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x460fe8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x460fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460fec: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x460fecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x460ff0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x460ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x460ff4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x460ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460ff8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x460ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x460ffc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x460ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x461000: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x461000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x461004: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x461004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x461008: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x461008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46100c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x46100cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x461010: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x461010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x461014: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x461014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x461018: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x461018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x46101c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x46101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x461020: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x461020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x461024: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x461024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x461028: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x461028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x46102c: 0x14a0ffea  bnez        $a1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x46102Cu;
    {
        const bool branch_taken_0x46102c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x461030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46102Cu;
        // 0x461030: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46102c) {
            ctx->pc = 0x460FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_460fd8;
        }
    }
    ctx->pc = 0x461034u;
label_461034:
    // 0x461034: 0x3e00008  jr          $ra
    ctx->pc = 0x461034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46103Cu;
    // 0x46103c: 0x0  nop
    ctx->pc = 0x46103cu;
    // NOP
    // 0x461040: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x461040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x461044: 0x8cc70048  lw          $a3, 0x48($a2)
    ctx->pc = 0x461044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x461048: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x461048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x46104c: 0x18a00019  blez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x46104Cu;
    {
        const bool branch_taken_0x46104c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x461050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46104Cu;
        // 0x461050: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46104c) {
            ctx->pc = 0x4610B4u;
            goto label_4610b4;
        }
    }
    ctx->pc = 0x461054u;
    // 0x461054: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x461054u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_461058:
    // 0x461058: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x461058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x46105c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x46105cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x461060: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x461060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x461064: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x461064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x461068: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x461068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46106c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x46106cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x461070: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x461070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x461074: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x461074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x461078: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x461078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x46107c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x46107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x461080: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x461080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x461084: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x461084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x461088: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x461088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46108c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x46108cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x461090: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x461090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x461094: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x461094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x461098: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x461098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x46109c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x46109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4610a0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4610a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4610a4: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x4610a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4610a8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x4610a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4610ac: 0x14a0ffea  bnez        $a1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x4610ACu;
    {
        const bool branch_taken_0x4610ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4610B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4610ACu;
        // 0x4610b0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4610ac) {
            ctx->pc = 0x461058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_461058;
        }
    }
    ctx->pc = 0x4610B4u;
label_4610b4:
    // 0x4610b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4610B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4610B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4610BCu;
    // 0x4610bc: 0x0  nop
    ctx->pc = 0x4610bcu;
    // NOP
    // 0x4610c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4610c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4610c4: 0x24c20098  addiu       $v0, $a2, 0x98
    ctx->pc = 0x4610c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 152));
    // 0x4610c8: 0x24c60090  addiu       $a2, $a2, 0x90
    ctx->pc = 0x4610c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x4610cc: 0x18a00018  blez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x4610CCu;
    {
        const bool branch_taken_0x4610cc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x4610D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4610CCu;
        // 0x4610d0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4610cc) {
            ctx->pc = 0x461130u;
            goto label_461130;
        }
    }
    ctx->pc = 0x4610D4u;
    // 0x4610d4: 0x0  nop
    ctx->pc = 0x4610d4u;
    // NOP
label_4610d8:
    // 0x4610d8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x4610d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4610dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4610dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4610e0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x4610e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4610e4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4610e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4610e8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4610e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4610ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4610ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4610f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4610f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4610f4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4610f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4610f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4610f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4610fc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x4610fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x461100: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x461100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x461104: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x461104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x461108: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x461108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x46110c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x46110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x461110: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x461110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x461114: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x461114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x461118: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x461118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46111c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x46111cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x461120: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x461120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x461124: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x461124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x461128: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x461128u;
    {
        const bool branch_taken_0x461128 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x46112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461128u;
        // 0x46112c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461128) {
            ctx->pc = 0x4610D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4610d8;
        }
    }
    ctx->pc = 0x461130u;
label_461130:
    // 0x461130: 0x3e00008  jr          $ra
    ctx->pc = 0x461130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x461138u;
    // 0x461138: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x461138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x46113c: 0x24c800a8  addiu       $t0, $a2, 0xA8
    ctx->pc = 0x46113cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 168));
    // 0x461140: 0x24c70090  addiu       $a3, $a2, 0x90
    ctx->pc = 0x461140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x461144: 0x24c30098  addiu       $v1, $a2, 0x98
    ctx->pc = 0x461144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 152));
    // 0x461148: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x461148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x46114c: 0x18a00018  blez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x46114Cu;
    {
        const bool branch_taken_0x46114c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x461150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46114Cu;
        // 0x461150: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46114c) {
            ctx->pc = 0x4611B0u;
            goto label_4611b0;
        }
    }
    ctx->pc = 0x461154u;
    // 0x461154: 0x0  nop
    ctx->pc = 0x461154u;
    // NOP
label_461158:
    // 0x461158: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x461158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46115c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x46115cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x461160: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x461160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x461164: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x461164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x461168: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x461168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x46116c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x46116cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x461170: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x461170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x461174: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x461174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x461178: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x461178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46117c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x46117cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x461180: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x461180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x461184: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x461184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x461188: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x461188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x46118c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x46118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x461190: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x461190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x461194: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x461194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x461198: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x461198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46119c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x46119cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4611a0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x4611a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4611a4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x4611a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4611a8: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4611A8u;
    {
        const bool branch_taken_0x4611a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4611ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4611A8u;
        // 0x4611ac: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4611a8) {
            ctx->pc = 0x461158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_461158;
        }
    }
    ctx->pc = 0x4611B0u;
label_4611b0:
    // 0x4611b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4611B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4611B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4611B8u;
    // 0x4611b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4611b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4611bc: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x4611bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x4611c0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4611c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4611c4: 0x18a00021  blez        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x4611C4u;
    {
        const bool branch_taken_0x4611c4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x4611C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4611C4u;
        // 0x4611c8: 0x8cc20014  lw          $v0, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4611c4) {
            ctx->pc = 0x46124Cu;
            goto label_46124c;
        }
    }
    ctx->pc = 0x4611CCu;
    // 0x4611cc: 0x0  nop
    ctx->pc = 0x4611ccu;
    // NOP
label_4611d0:
    // 0x4611d0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4611d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4611d4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4611d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4611d8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x4611d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4611dc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4611dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4611e0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4611e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4611e4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4611e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4611e8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x4611e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4611ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4611ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4611f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4611f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4611f4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4611f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4611f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4611f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4611fc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x4611fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x461200: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x461200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x461204: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x461204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x461208: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x461208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x46120c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x46120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x461210: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x461210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x461214: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x461214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x461218: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x461218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x46121c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x46121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x461220: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x461220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x461224: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x461224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x461228: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x461228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46122c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x46122cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x461230: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x461230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x461234: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x461234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x461238: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x461238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46123c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x46123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x461240: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x461240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x461244: 0x14a0ffe2  bnez        $a1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x461244u;
    {
        const bool branch_taken_0x461244 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x461248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461244u;
        // 0x461248: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461244) {
            ctx->pc = 0x4611D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4611d0;
        }
    }
    ctx->pc = 0x46124Cu;
label_46124c:
    // 0x46124c: 0x3e00008  jr          $ra
    ctx->pc = 0x46124Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46124Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x461254u;
    // 0x461254: 0x0  nop
    ctx->pc = 0x461254u;
    // NOP
    ctx->pc = 0x461258u;
}
