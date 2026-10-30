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

// Function: sub_002E18D8
// Address: 0x2e18d8 - 0x2e1950
void sub_002E18D8_0x2e18d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E18D8_0x2e18d8");
#endif

    switch (ctx->pc) {
        case 0x2e18d8u: goto label_2e18d8;
        case 0x2e18dcu: goto label_2e18dc;
        case 0x2e18e0u: goto label_2e18e0;
        case 0x2e18e4u: goto label_2e18e4;
        case 0x2e18e8u: goto label_2e18e8;
        case 0x2e18ecu: goto label_2e18ec;
        case 0x2e18f0u: goto label_2e18f0;
        case 0x2e18f4u: goto label_2e18f4;
        case 0x2e18f8u: goto label_2e18f8;
        case 0x2e18fcu: goto label_2e18fc;
        case 0x2e1900u: goto label_2e1900;
        case 0x2e1904u: goto label_2e1904;
        case 0x2e1908u: goto label_2e1908;
        case 0x2e190cu: goto label_2e190c;
        case 0x2e1910u: goto label_2e1910;
        case 0x2e1914u: goto label_2e1914;
        case 0x2e1918u: goto label_2e1918;
        case 0x2e191cu: goto label_2e191c;
        case 0x2e1920u: goto label_2e1920;
        case 0x2e1924u: goto label_2e1924;
        case 0x2e1928u: goto label_2e1928;
        case 0x2e192cu: goto label_2e192c;
        case 0x2e1930u: goto label_2e1930;
        case 0x2e1934u: goto label_2e1934;
        case 0x2e1938u: goto label_2e1938;
        case 0x2e193cu: goto label_2e193c;
        case 0x2e1940u: goto label_2e1940;
        case 0x2e1944u: goto label_2e1944;
        case 0x2e1948u: goto label_2e1948;
        case 0x2e194cu: goto label_2e194c;
        default: break;
    }

    ctx->pc = 0x2e18d8u;

label_2e18d8:
    // 0x2e18d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e18d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e18dc:
    // 0x2e18dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e18dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e18e0:
    // 0x2e18e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e18e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e18e4:
    // 0x2e18e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e18e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e18e8:
    // 0x2e18e8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2e18e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e18ec:
    // 0x2e18ec: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2e18ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2e18f0:
    // 0x2e18f0: 0x90c2000b  lbu         $v0, 0xB($a2)
    ctx->pc = 0x2e18f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
label_2e18f4:
    // 0x2e18f4: 0xa2020039  sb          $v0, 0x39($s0)
    ctx->pc = 0x2e18f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 2));
label_2e18f8:
    // 0x2e18f8: 0x8cc3021c  lw          $v1, 0x21C($a2)
    ctx->pc = 0x2e18f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 540)));
label_2e18fc:
    // 0x2e18fc: 0xa203003a  sb          $v1, 0x3A($s0)
    ctx->pc = 0x2e18fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 3));
label_2e1900:
    // 0x2e1900: 0xc08ab90  jal         func_22AE40
label_2e1904:
    if (ctx->pc == 0x2E1904u) {
        ctx->pc = 0x2E1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1900u;
        // 0x2e1904: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1908u;
        goto label_2e1908;
    }
    ctx->pc = 0x2E1900u;
    SET_GPR_U32(ctx, 31, 0x2E1908u);
    ctx->pc = 0x2E1904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1900u;
    // 0x2e1904: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x2E1900u, 0x2E1908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1908u;
label_2e1908:
    // 0x2e1908: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2e1908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_2e190c:
    // 0x2e190c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e190cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e1910:
    // 0x2e1910: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2e1910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2e1914:
    // 0x2e1914: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e1914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2e1918:
    // 0x2e1918: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e1918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e191c:
    // 0x2e191c: 0xc460012c  lwc1        $f0, 0x12C($v1)
    ctx->pc = 0x2e191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1920:
    // 0x2e1920: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x2e1920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_2e1924:
    // 0x2e1924: 0xe461012c  swc1        $f1, 0x12C($v1)
    ctx->pc = 0x2e1924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2e1928:
    // 0x2e1928: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e1928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2e192c:
    // 0x2e192c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2e192cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2e1930:
    // 0x2e1930: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2e1930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2e1934:
    // 0x2e1934: 0x60f809  jalr        $v1
label_2e1938:
    if (ctx->pc == 0x2E1938u) {
        ctx->pc = 0x2E1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1934u;
        // 0x2e1938: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E193Cu;
        goto label_2e193c;
    }
    ctx->pc = 0x2E1934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E193Cu);
        ctx->pc = 0x2E1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1934u;
        // 0x2e1938: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1934u, 0x2E193Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E193Cu;
label_2e193c:
    // 0x2e193c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e193cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e1940:
    // 0x2e1940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1944:
    // 0x2e1944: 0x3e00008  jr          $ra
label_2e1948:
    if (ctx->pc == 0x2E1948u) {
        ctx->pc = 0x2E1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1944u;
        // 0x2e1948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E194Cu;
        goto label_2e194c;
    }
    ctx->pc = 0x2E1944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1944u;
        // 0x2e1948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E194Cu;
label_2e194c:
    // 0x2e194c: 0x0  nop
    ctx->pc = 0x2e194cu;
    // NOP
    ctx->pc = 0x2e1950u;
}
