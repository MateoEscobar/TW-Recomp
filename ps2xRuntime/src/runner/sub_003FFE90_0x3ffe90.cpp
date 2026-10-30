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

// Function: sub_003FFE90
// Address: 0x3ffe90 - 0x400004
void sub_003FFE90_0x3ffe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FFE90_0x3ffe90");
#endif

    switch (ctx->pc) {
        case 0x3ffefcu: goto label_3ffefc;
        case 0x3fff0cu: goto label_3fff0c;
        case 0x3fff14u: goto label_3fff14;
        case 0x3fff20u: goto label_3fff20;
        case 0x3fff28u: goto label_3fff28;
        case 0x3fff30u: goto label_3fff30;
        case 0x3fff64u: goto label_3fff64;
        case 0x3fff74u: goto label_3fff74;
        case 0x3fff94u: goto label_3fff94;
        case 0x3fffacu: goto label_3fffac;
        case 0x3fffd8u: goto label_3fffd8;
        case 0x3fffe8u: goto label_3fffe8;
        default: break;
    }

    ctx->pc = 0x3ffe90u;

    // 0x3ffe90: 0x27bdf9c0  addiu       $sp, $sp, -0x640
    ctx->pc = 0x3ffe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965696));
    // 0x3ffe94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ffe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ffe98: 0xafa60534  sw          $a2, 0x534($sp)
    ctx->pc = 0x3ffe98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1332), GPR_U32(ctx, 6));
    // 0x3ffe9c: 0x7fb005f0  sq          $s0, 0x5F0($sp)
    ctx->pc = 0x3ffe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1520), GPR_VEC(ctx, 16));
    // 0x3ffea0: 0xafa40530  sw          $a0, 0x530($sp)
    ctx->pc = 0x3ffea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1328), GPR_U32(ctx, 4));
    // 0x3ffea4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ffea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffea8: 0x7fb105e0  sq          $s1, 0x5E0($sp)
    ctx->pc = 0x3ffea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1504), GPR_VEC(ctx, 17));
    // 0x3ffeac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ffeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ffeb0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3ffeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffeb4: 0x7fb205d0  sq          $s2, 0x5D0($sp)
    ctx->pc = 0x3ffeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1488), GPR_VEC(ctx, 18));
    // 0x3ffeb8: 0x7fb305c0  sq          $s3, 0x5C0($sp)
    ctx->pc = 0x3ffeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1472), GPR_VEC(ctx, 19));
    // 0x3ffebc: 0x7fb405b0  sq          $s4, 0x5B0($sp)
    ctx->pc = 0x3ffebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), GPR_VEC(ctx, 20));
    // 0x3ffec0: 0x7fb505a0  sq          $s5, 0x5A0($sp)
    ctx->pc = 0x3ffec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), GPR_VEC(ctx, 21));
    // 0x3ffec4: 0x7fb60590  sq          $s6, 0x590($sp)
    ctx->pc = 0x3ffec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 22));
    // 0x3ffec8: 0x7fb70580  sq          $s7, 0x580($sp)
    ctx->pc = 0x3ffec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 23));
    // 0x3ffecc: 0x7fbe0570  sq          $fp, 0x570($sp)
    ctx->pc = 0x3ffeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 30));
    // 0x3ffed0: 0xffbf0560  sd          $ra, 0x560($sp)
    ctx->pc = 0x3ffed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1376), GPR_U64(ctx, 31));
    // 0x3ffed4: 0xe7bb0638  swc1        $f27, 0x638($sp)
    ctx->pc = 0x3ffed4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1592), bits); }
    // 0x3ffed8: 0xe7ba0630  swc1        $f26, 0x630($sp)
    ctx->pc = 0x3ffed8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1584), bits); }
    // 0x3ffedc: 0xe7b90628  swc1        $f25, 0x628($sp)
    ctx->pc = 0x3ffedcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1576), bits); }
    // 0x3ffee0: 0xe7b80620  swc1        $f24, 0x620($sp)
    ctx->pc = 0x3ffee0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1568), bits); }
    // 0x3ffee4: 0xe7b70618  swc1        $f23, 0x618($sp)
    ctx->pc = 0x3ffee4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1560), bits); }
    // 0x3ffee8: 0xe7b60610  swc1        $f22, 0x610($sp)
    ctx->pc = 0x3ffee8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1552), bits); }
    // 0x3ffeec: 0xe7b50608  swc1        $f21, 0x608($sp)
    ctx->pc = 0x3ffeecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1544), bits); }
    // 0x3ffef0: 0xe7b40600  swc1        $f20, 0x600($sp)
    ctx->pc = 0x3ffef0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1536), bits); }
    // 0x3ffef4: 0xc0ea12a  jal         func_3A84A8
    ctx->pc = 0x3FFEF4u;
    SET_GPR_U32(ctx, 31, 0x3FFEFCu);
    ctx->pc = 0x3FFEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFEF4u;
    // 0x3ffef8: 0xafa2053c  sw          $v0, 0x53C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FFEF4u, 0x3FFEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFEFCu;
label_3ffefc:
    // 0x3ffefc: 0x8fa50534  lw          $a1, 0x534($sp)
    ctx->pc = 0x3ffefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
    // 0x3fff00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fff00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3fff04: 0xc0ea12a  jal         func_3A84A8
    ctx->pc = 0x3FFF04u;
    SET_GPR_U32(ctx, 31, 0x3FFF0Cu);
    ctx->pc = 0x3FFF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFF04u;
    // 0x3fff08: 0xafa00540  sw          $zero, 0x540($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FFF04u, 0x3FFF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFF0Cu;
label_3fff0c:
    // 0x3fff0c: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3FFF0Cu;
    SET_GPR_U32(ctx, 31, 0x3FFF14u);
    ctx->pc = 0x3FFF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFF0Cu;
    // 0x3fff10: 0x8fa40534  lw          $a0, 0x534($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FFF0Cu, 0x3FFF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFF14u;
label_3fff14:
    // 0x3fff14: 0x8fa40534  lw          $a0, 0x534($sp)
    ctx->pc = 0x3fff14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
    // 0x3fff18: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3FFF18u;
    SET_GPR_U32(ctx, 31, 0x3FFF20u);
    ctx->pc = 0x3FFF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFF18u;
    // 0x3fff1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FFF18u, 0x3FFF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFF20u;
label_3fff20:
    // 0x3fff20: 0xc0ea14c  jal         func_3A8530
    ctx->pc = 0x3FFF20u;
    SET_GPR_U32(ctx, 31, 0x3FFF28u);
    ctx->pc = 0x3FFF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFF20u;
    // 0x3fff24: 0x8fa40534  lw          $a0, 0x534($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FFF20u, 0x3FFF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFF28u;
label_3fff28:
    // 0x3fff28: 0xc0ea14c  jal         func_3A8530
    ctx->pc = 0x3FFF28u;
    SET_GPR_U32(ctx, 31, 0x3FFF30u);
    ctx->pc = 0x3FFF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFF28u;
    // 0x3fff2c: 0x8fa40534  lw          $a0, 0x534($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FFF28u, 0x3FFF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFF30u;
label_3fff30:
    // 0x3fff30: 0xafa20538  sw          $v0, 0x538($sp)
    ctx->pc = 0x3fff30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1336), GPR_U32(ctx, 2));
    // 0x3fff34: 0x8fa40530  lw          $a0, 0x530($sp)
    ctx->pc = 0x3fff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x3fff38: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3fff38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x3fff3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3fff3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3fff40: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x3fff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3fff44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3fff44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3fff48: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x3fff48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x3fff4c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3fff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3fff50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FFF50u;
    {
        const bool branch_taken_0x3fff50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FFF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFF50u;
        // 0x3fff54: 0x8fa50530  lw          $a1, 0x530($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fff50) {
            ctx->pc = 0x3FFF6Cu;
            goto label_3fff6c;
        }
    }
    ctx->pc = 0x3FFF58u;
    // 0x3fff58: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x3fff58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3fff5c: 0xc0e91f0  jal         func_3A47C0
    ctx->pc = 0x3FFF5Cu;
    SET_GPR_U32(ctx, 31, 0x3FFF64u);
    ctx->pc = 0x3FFF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFF5Cu;
    // 0x3fff60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3FFF5Cu, 0x3FFF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFF64u;
label_3fff64:
    // 0x3fff64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fff64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fff68: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3fff68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_3fff6c:
    // 0x3fff6c: 0xc0e94d0  jal         func_3A5340
    ctx->pc = 0x3FFF6Cu;
    SET_GPR_U32(ctx, 31, 0x3FFF74u);
    ctx->pc = 0x3FFF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFF6Cu;
    // 0x3fff70: 0x8fa40530  lw          $a0, 0x530($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5340u, 0x3FFF6Cu, 0x3FFF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFF74u;
label_3fff74:
    // 0x3fff74: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3fff74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3fff78: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FFF78u;
    {
        const bool branch_taken_0x3fff78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x3FFF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFF78u;
        // 0x3fff7c: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fff78) {
            ctx->pc = 0x3FFF8Cu;
            goto label_3fff8c;
        }
    }
    ctx->pc = 0x3FFF80u;
    // 0x3fff80: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3fff80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3fff84: 0x8fa20530  lw          $v0, 0x530($sp)
    ctx->pc = 0x3fff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x3fff88: 0xa040010d  sb          $zero, 0x10D($v0)
    ctx->pc = 0x3fff88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 269), (uint8_t)GPR_U32(ctx, 0));
label_3fff8c:
    // 0x3fff8c: 0xc0e9694  jal         func_3A5A50
    ctx->pc = 0x3FFF8Cu;
    SET_GPR_U32(ctx, 31, 0x3FFF94u);
    ctx->pc = 0x3FFF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFF8Cu;
    // 0x3fff90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3FFF8Cu, 0x3FFF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFF94u;
label_3fff94:
    // 0x3fff94: 0x10400b04  beqz        $v0, . + 4 + (0xB04 << 2)
    ctx->pc = 0x3FFF94u;
    {
        const bool branch_taken_0x3fff94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFF94u;
        // 0x3fff98: 0x8fa30530  lw          $v1, 0x530($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fff94) {
            ctx->pc = 0x402BA8u;
            return;
        }
    }
    ctx->pc = 0x3FFF9Cu;
    // 0x3fff9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3fff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3fffa0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x3fffa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3fffa4: 0xc04808c  jal         func_120230
    ctx->pc = 0x3FFFA4u;
    SET_GPR_U32(ctx, 31, 0x3FFFACu);
    ctx->pc = 0x3FFFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFFA4u;
    // 0x3fffa8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x3FFFA4u, 0x3FFFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFFACu;
label_3fffac:
    // 0x3fffac: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x3fffacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
    // 0x3fffb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3fffb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3fffb4: 0x0  nop
    ctx->pc = 0x3fffb4u;
    // NOP
    // 0x3fffb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3fffb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3fffbc: 0x0  nop
    ctx->pc = 0x3fffbcu;
    // NOP
    // 0x3fffc0: 0x45010afa  bc1t        . + 4 + (0xAFA << 2)
    ctx->pc = 0x3FFFC0u;
    {
        const bool branch_taken_0x3fffc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FFFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFFC0u;
        // 0x3fffc4: 0x7bb005f0  lq          $s0, 0x5F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fffc0) {
            ctx->pc = 0x402BACu;
            return;
        }
    }
    ctx->pc = 0x3FFFC8u;
    // 0x3fffc8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3fffc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x3fffcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fffccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3fffd0: 0xc0e947e  jal         func_3A51F8
    ctx->pc = 0x3FFFD0u;
    SET_GPR_U32(ctx, 31, 0x3FFFD8u);
    ctx->pc = 0x3FFFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFFD0u;
    // 0x3fffd4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3FFFD0u, 0x3FFFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFFD8u;
label_3fffd8:
    // 0x3fffd8: 0x10400af3  beqz        $v0, . + 4 + (0xAF3 << 2)
    ctx->pc = 0x3FFFD8u;
    {
        const bool branch_taken_0x3fffd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFFD8u;
        // 0x3fffdc: 0x8fa50530  lw          $a1, 0x530($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fffd8) {
            ctx->pc = 0x402BA8u;
            return;
        }
    }
    ctx->pc = 0x3FFFE0u;
    // 0x3fffe0: 0xc0e92f4  jal         func_3A4BD0
    ctx->pc = 0x3FFFE0u;
    SET_GPR_U32(ctx, 31, 0x3FFFE8u);
    ctx->pc = 0x3FFFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFFE0u;
    // 0x3fffe4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3FFFE0u, 0x3FFFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFFE8u;
label_3fffe8:
    // 0x3fffe8: 0x8fa40530  lw          $a0, 0x530($sp)
    ctx->pc = 0x3fffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x3fffec: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3fffecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ffff0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ffff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ffff4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ffff4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3ffff8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3ffff8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3ffffc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3ffffcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x400000: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x400000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    ctx->pc = 0x400004u;
}
