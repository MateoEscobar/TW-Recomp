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

// Function: sub_0016DE30
// Address: 0x16de30 - 0x16def8
void sub_0016DE30_0x16de30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DE30_0x16de30");
#endif

    ctx->pc = 0x16de30u;

    // 0x16de30: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x16de30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x16de34: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x16de34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16de38: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x16de38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16de3c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x16de3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x16de40: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x16de40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16de44: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x16de44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x16de48: 0x250a16c0  addiu       $t2, $t0, 0x16C0
    ctx->pc = 0x16de48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 5824));
    // 0x16de4c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16de4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16de50: 0xac6900b4  sw          $t1, 0xB4($v1)
    ctx->pc = 0x16de50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 9));
    // 0x16de54: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x16de54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x16de58: 0x8ce5bd30  lw          $a1, -0x42D0($a3)
    ctx->pc = 0x16de58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
    // 0x16de5c: 0x461818  mult        $v1, $v0, $a2
    ctx->pc = 0x16de5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16de60: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x16de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16de64: 0xac4500b8  sw          $a1, 0xB8($v0)
    ctx->pc = 0x16de64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 5));
    // 0x16de68: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x16de68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x16de6c: 0xc50116c0  lwc1        $f1, 0x16C0($t0)
    ctx->pc = 0x16de6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16de70: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x16de70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16de74: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16de74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16de78: 0x246300bc  addiu       $v1, $v1, 0xBC
    ctx->pc = 0x16de78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 188));
    // 0x16de7c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x16de7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x16de80: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x16de80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16de84: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x16de84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x16de88: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x16de88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16de8c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x16de8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x16de90: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x16de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x16de94: 0x461818  mult        $v1, $v0, $a2
    ctx->pc = 0x16de94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16de98: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x16de98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16de9c: 0xa04000cb  sb          $zero, 0xCB($v0)
    ctx->pc = 0x16de9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 203), (uint8_t)GPR_U32(ctx, 0));
    // 0x16dea0: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x16dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x16dea4: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x16dea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16dea8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16deac: 0xa06000ca  sb          $zero, 0xCA($v1)
    ctx->pc = 0x16deacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 202), (uint8_t)GPR_U32(ctx, 0));
    // 0x16deb0: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x16deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x16deb4: 0x461818  mult        $v1, $v0, $a2
    ctx->pc = 0x16deb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16deb8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x16deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16debc: 0xa44000c8  sh          $zero, 0xC8($v0)
    ctx->pc = 0x16debcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 200), (uint16_t)GPR_U32(ctx, 0));
    // 0x16dec0: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x16dec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x16dec4: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x16dec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16dec8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16decc: 0xa06900cc  sb          $t1, 0xCC($v1)
    ctx->pc = 0x16deccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 204), (uint8_t)GPR_U32(ctx, 9));
    // 0x16ded0: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x16ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x16ded4: 0x461818  mult        $v1, $v0, $a2
    ctx->pc = 0x16ded4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16ded8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x16ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16dedc: 0xa04900cd  sb          $t1, 0xCD($v0)
    ctx->pc = 0x16dedcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 205), (uint8_t)GPR_U32(ctx, 9));
    // 0x16dee0: 0xac8900ac  sw          $t1, 0xAC($a0)
    ctx->pc = 0x16dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 9));
    // 0x16dee4: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x16dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x16dee8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16deec: 0x3e00008  jr          $ra
    ctx->pc = 0x16DEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEECu;
        // 0x16def0: 0xac8200b0  sw          $v0, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DEF4u;
    // 0x16def4: 0x0  nop
    ctx->pc = 0x16def4u;
    // NOP
    ctx->pc = 0x16def8u;
}
