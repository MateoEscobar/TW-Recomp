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

// Function: sub_0042CA68
// Address: 0x42ca68 - 0x42cc88
void sub_0042CA68_0x42ca68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042CA68_0x42ca68");
#endif

    switch (ctx->pc) {
        case 0x42ca68u: goto label_42ca68;
        case 0x42ca6cu: goto label_42ca6c;
        case 0x42ca70u: goto label_42ca70;
        case 0x42ca74u: goto label_42ca74;
        case 0x42ca78u: goto label_42ca78;
        case 0x42ca7cu: goto label_42ca7c;
        case 0x42ca80u: goto label_42ca80;
        case 0x42ca84u: goto label_42ca84;
        case 0x42ca88u: goto label_42ca88;
        case 0x42ca8cu: goto label_42ca8c;
        case 0x42ca90u: goto label_42ca90;
        case 0x42ca94u: goto label_42ca94;
        case 0x42ca98u: goto label_42ca98;
        case 0x42ca9cu: goto label_42ca9c;
        case 0x42caa0u: goto label_42caa0;
        case 0x42caa4u: goto label_42caa4;
        case 0x42caa8u: goto label_42caa8;
        case 0x42caacu: goto label_42caac;
        case 0x42cab0u: goto label_42cab0;
        case 0x42cab4u: goto label_42cab4;
        case 0x42cab8u: goto label_42cab8;
        case 0x42cabcu: goto label_42cabc;
        case 0x42cac0u: goto label_42cac0;
        case 0x42cac4u: goto label_42cac4;
        case 0x42cac8u: goto label_42cac8;
        case 0x42caccu: goto label_42cacc;
        case 0x42cad0u: goto label_42cad0;
        case 0x42cad4u: goto label_42cad4;
        case 0x42cad8u: goto label_42cad8;
        case 0x42cadcu: goto label_42cadc;
        case 0x42cae0u: goto label_42cae0;
        case 0x42cae4u: goto label_42cae4;
        case 0x42cae8u: goto label_42cae8;
        case 0x42caecu: goto label_42caec;
        case 0x42caf0u: goto label_42caf0;
        case 0x42caf4u: goto label_42caf4;
        case 0x42caf8u: goto label_42caf8;
        case 0x42cafcu: goto label_42cafc;
        case 0x42cb00u: goto label_42cb00;
        case 0x42cb04u: goto label_42cb04;
        case 0x42cb08u: goto label_42cb08;
        case 0x42cb0cu: goto label_42cb0c;
        case 0x42cb10u: goto label_42cb10;
        case 0x42cb14u: goto label_42cb14;
        case 0x42cb18u: goto label_42cb18;
        case 0x42cb1cu: goto label_42cb1c;
        case 0x42cb20u: goto label_42cb20;
        case 0x42cb24u: goto label_42cb24;
        case 0x42cb28u: goto label_42cb28;
        case 0x42cb2cu: goto label_42cb2c;
        case 0x42cb30u: goto label_42cb30;
        case 0x42cb34u: goto label_42cb34;
        case 0x42cb38u: goto label_42cb38;
        case 0x42cb3cu: goto label_42cb3c;
        case 0x42cb40u: goto label_42cb40;
        case 0x42cb44u: goto label_42cb44;
        case 0x42cb48u: goto label_42cb48;
        case 0x42cb4cu: goto label_42cb4c;
        case 0x42cb50u: goto label_42cb50;
        case 0x42cb54u: goto label_42cb54;
        case 0x42cb58u: goto label_42cb58;
        case 0x42cb5cu: goto label_42cb5c;
        case 0x42cb60u: goto label_42cb60;
        case 0x42cb64u: goto label_42cb64;
        case 0x42cb68u: goto label_42cb68;
        case 0x42cb6cu: goto label_42cb6c;
        case 0x42cb70u: goto label_42cb70;
        case 0x42cb74u: goto label_42cb74;
        case 0x42cb78u: goto label_42cb78;
        case 0x42cb7cu: goto label_42cb7c;
        case 0x42cb80u: goto label_42cb80;
        case 0x42cb84u: goto label_42cb84;
        case 0x42cb88u: goto label_42cb88;
        case 0x42cb8cu: goto label_42cb8c;
        case 0x42cb90u: goto label_42cb90;
        case 0x42cb94u: goto label_42cb94;
        case 0x42cb98u: goto label_42cb98;
        case 0x42cb9cu: goto label_42cb9c;
        case 0x42cba0u: goto label_42cba0;
        case 0x42cba4u: goto label_42cba4;
        case 0x42cba8u: goto label_42cba8;
        case 0x42cbacu: goto label_42cbac;
        case 0x42cbb0u: goto label_42cbb0;
        case 0x42cbb4u: goto label_42cbb4;
        case 0x42cbb8u: goto label_42cbb8;
        case 0x42cbbcu: goto label_42cbbc;
        case 0x42cbc0u: goto label_42cbc0;
        case 0x42cbc4u: goto label_42cbc4;
        case 0x42cbc8u: goto label_42cbc8;
        case 0x42cbccu: goto label_42cbcc;
        case 0x42cbd0u: goto label_42cbd0;
        case 0x42cbd4u: goto label_42cbd4;
        case 0x42cbd8u: goto label_42cbd8;
        case 0x42cbdcu: goto label_42cbdc;
        case 0x42cbe0u: goto label_42cbe0;
        case 0x42cbe4u: goto label_42cbe4;
        case 0x42cbe8u: goto label_42cbe8;
        case 0x42cbecu: goto label_42cbec;
        case 0x42cbf0u: goto label_42cbf0;
        case 0x42cbf4u: goto label_42cbf4;
        case 0x42cbf8u: goto label_42cbf8;
        case 0x42cbfcu: goto label_42cbfc;
        case 0x42cc00u: goto label_42cc00;
        case 0x42cc04u: goto label_42cc04;
        case 0x42cc08u: goto label_42cc08;
        case 0x42cc0cu: goto label_42cc0c;
        case 0x42cc10u: goto label_42cc10;
        case 0x42cc14u: goto label_42cc14;
        case 0x42cc18u: goto label_42cc18;
        case 0x42cc1cu: goto label_42cc1c;
        case 0x42cc20u: goto label_42cc20;
        case 0x42cc24u: goto label_42cc24;
        case 0x42cc28u: goto label_42cc28;
        case 0x42cc2cu: goto label_42cc2c;
        case 0x42cc30u: goto label_42cc30;
        case 0x42cc34u: goto label_42cc34;
        case 0x42cc38u: goto label_42cc38;
        case 0x42cc3cu: goto label_42cc3c;
        case 0x42cc40u: goto label_42cc40;
        case 0x42cc44u: goto label_42cc44;
        case 0x42cc48u: goto label_42cc48;
        case 0x42cc4cu: goto label_42cc4c;
        case 0x42cc50u: goto label_42cc50;
        case 0x42cc54u: goto label_42cc54;
        case 0x42cc58u: goto label_42cc58;
        case 0x42cc5cu: goto label_42cc5c;
        case 0x42cc60u: goto label_42cc60;
        case 0x42cc64u: goto label_42cc64;
        case 0x42cc68u: goto label_42cc68;
        case 0x42cc6cu: goto label_42cc6c;
        case 0x42cc70u: goto label_42cc70;
        case 0x42cc74u: goto label_42cc74;
        case 0x42cc78u: goto label_42cc78;
        case 0x42cc7cu: goto label_42cc7c;
        case 0x42cc80u: goto label_42cc80;
        case 0x42cc84u: goto label_42cc84;
        default: break;
    }

    ctx->pc = 0x42ca68u;

label_42ca68:
    // 0x42ca68: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x42ca68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_42ca6c:
    // 0x42ca6c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_42ca70:
    // 0x42ca70: 0xffbe06d0  sd          $fp, 0x6D0($sp)
    ctx->pc = 0x42ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1744), GPR_U64(ctx, 30));
label_42ca74:
    // 0x42ca74: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x42ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_42ca78:
    // 0x42ca78: 0xffb706c0  sd          $s7, 0x6C0($sp)
    ctx->pc = 0x42ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1728), GPR_U64(ctx, 23));
label_42ca7c:
    // 0x42ca7c: 0xffb606b0  sd          $s6, 0x6B0($sp)
    ctx->pc = 0x42ca7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1712), GPR_U64(ctx, 22));
label_42ca80:
    // 0x42ca80: 0xffb506a0  sd          $s5, 0x6A0($sp)
    ctx->pc = 0x42ca80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 21));
label_42ca84:
    // 0x42ca84: 0xffb40690  sd          $s4, 0x690($sp)
    ctx->pc = 0x42ca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 20));
label_42ca88:
    // 0x42ca88: 0xffb30680  sd          $s3, 0x680($sp)
    ctx->pc = 0x42ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 19));
label_42ca8c:
    // 0x42ca8c: 0xffb20670  sd          $s2, 0x670($sp)
    ctx->pc = 0x42ca8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 18));
label_42ca90:
    // 0x42ca90: 0xffb10660  sd          $s1, 0x660($sp)
    ctx->pc = 0x42ca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 17));
label_42ca94:
    // 0x42ca94: 0xffb00650  sd          $s0, 0x650($sp)
    ctx->pc = 0x42ca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 16));
label_42ca98:
    // 0x42ca98: 0xe7bf0748  swc1        $f31, 0x748($sp)
    ctx->pc = 0x42ca98u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1864), bits); }
label_42ca9c:
    // 0x42ca9c: 0xe7be0740  swc1        $f30, 0x740($sp)
    ctx->pc = 0x42ca9cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_42caa0:
    // 0x42caa0: 0xe7bd0738  swc1        $f29, 0x738($sp)
    ctx->pc = 0x42caa0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_42caa4:
    // 0x42caa4: 0xe7bc0730  swc1        $f28, 0x730($sp)
    ctx->pc = 0x42caa4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_42caa8:
    // 0x42caa8: 0xe7bb0728  swc1        $f27, 0x728($sp)
    ctx->pc = 0x42caa8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_42caac:
    // 0x42caac: 0xe7ba0720  swc1        $f26, 0x720($sp)
    ctx->pc = 0x42caacu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_42cab0:
    // 0x42cab0: 0xe7b90718  swc1        $f25, 0x718($sp)
    ctx->pc = 0x42cab0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_42cab4:
    // 0x42cab4: 0xe7b80710  swc1        $f24, 0x710($sp)
    ctx->pc = 0x42cab4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_42cab8:
    // 0x42cab8: 0xe7b70708  swc1        $f23, 0x708($sp)
    ctx->pc = 0x42cab8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_42cabc:
    // 0x42cabc: 0xe7b60700  swc1        $f22, 0x700($sp)
    ctx->pc = 0x42cabcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_42cac0:
    // 0x42cac0: 0xe7b506f8  swc1        $f21, 0x6F8($sp)
    ctx->pc = 0x42cac0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_42cac4:
    // 0x42cac4: 0xe7b406f0  swc1        $f20, 0x6F0($sp)
    ctx->pc = 0x42cac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_42cac8:
    // 0x42cac8: 0x8c6254c8  lw          $v0, 0x54C8($v1)
    ctx->pc = 0x42cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21704)));
label_42cacc:
    // 0x42cacc: 0x40f809  jalr        $v0
label_42cad0:
    if (ctx->pc == 0x42CAD0u) {
        ctx->pc = 0x42CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CACCu;
        // 0x42cad0: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CAD4u;
        goto label_42cad4;
    }
    ctx->pc = 0x42CACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42CAD4u);
        ctx->pc = 0x42CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CACCu;
        // 0x42cad0: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CACCu, 0x42CAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42CAD4u;
label_42cad4:
    // 0x42cad4: 0xafc20640  sw          $v0, 0x640($fp)
    ctx->pc = 0x42cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1600), GPR_U32(ctx, 2));
label_42cad8:
    // 0x42cad8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x42cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42cadc:
    // 0x42cadc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x42cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_42cae0:
    // 0x42cae0: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x42cae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_42cae4:
    // 0x42cae4: 0xafc20644  sw          $v0, 0x644($fp)
    ctx->pc = 0x42cae4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1604), GPR_U32(ctx, 2));
label_42cae8:
    // 0x42cae8: 0xafc50648  sw          $a1, 0x648($fp)
    ctx->pc = 0x42cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1608), GPR_U32(ctx, 5));
label_42caec:
    // 0x42caec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x42caecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_42caf0:
    // 0x42caf0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_42caf4:
    if (ctx->pc == 0x42CAF4u) {
        ctx->pc = 0x42CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CAF0u;
        // 0x42caf4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CAF8u;
        goto label_42caf8;
    }
    ctx->pc = 0x42CAF0u;
    {
        const bool branch_taken_0x42caf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CAF0u;
        // 0x42caf4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42caf0) {
            ctx->pc = 0x42CB90u;
            goto label_42cb90;
        }
    }
    ctx->pc = 0x42CAF8u;
label_42caf8:
    // 0x42caf8: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x42caf8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_42cafc:
    // 0x42cafc: 0x2442cb20  addiu       $v0, $v0, -0x34E0
    ctx->pc = 0x42cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953760));
label_42cb00:
    // 0x42cb00: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x42cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_42cb04:
    // 0x42cb04: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x42cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_42cb08:
    // 0x42cb08: 0xafde0008  sw          $fp, 0x8($fp)
    ctx->pc = 0x42cb08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 30));
label_42cb0c:
    // 0x42cb0c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x42cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_42cb10:
    // 0x42cb10: 0xafde064c  sw          $fp, 0x64C($fp)
    ctx->pc = 0x42cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1612), GPR_U32(ctx, 30));
label_42cb14:
    // 0x42cb14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x42cb14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42cb18:
    // 0x42cb18: 0x10000002  b           . + 4 + (0x2 << 2)
label_42cb1c:
    if (ctx->pc == 0x42CB1Cu) {
        ctx->pc = 0x42CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CB18u;
        // 0x42cb1c: 0xac7d0008  sw          $sp, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CB20u;
        goto label_42cb20;
    }
    ctx->pc = 0x42CB18u;
    {
        const bool branch_taken_0x42cb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CB18u;
        // 0x42cb1c: 0xac7d0008  sw          $sp, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cb18) {
            ctx->pc = 0x42CB24u;
            goto label_42cb24;
        }
    }
    ctx->pc = 0x42CB20u;
label_42cb20:
    // 0x42cb20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42cb24:
    // 0x42cb24: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_42cb28:
    if (ctx->pc == 0x42CB28u) {
        ctx->pc = 0x42CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CB24u;
        // 0x42cb28: 0x8fc2064c  lw          $v0, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CB2Cu;
        goto label_42cb2c;
    }
    ctx->pc = 0x42CB24u;
    {
        const bool branch_taken_0x42cb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CB24u;
        // 0x42cb28: 0x8fc2064c  lw          $v0, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cb24) {
            ctx->pc = 0x42CB88u;
            goto label_42cb88;
        }
    }
    ctx->pc = 0x42CB2Cu;
label_42cb2c:
    // 0x42cb2c: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x42cb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_42cb30:
    // 0x42cb30: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x42cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_42cb34:
    // 0x42cb34: 0x8fc50648  lw          $a1, 0x648($fp)
    ctx->pc = 0x42cb34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_42cb38:
    // 0x42cb38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x42cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42cb3c:
    // 0x42cb3c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_42cb40:
    if (ctx->pc == 0x42CB40u) {
        ctx->pc = 0x42CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CB3Cu;
        // 0x42cb40: 0x8fc5064c  lw          $a1, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CB44u;
        goto label_42cb44;
    }
    ctx->pc = 0x42CB3Cu;
    {
        const bool branch_taken_0x42cb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CB3Cu;
        // 0x42cb40: 0x8fc5064c  lw          $a1, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cb3c) {
            ctx->pc = 0x42CB78u;
            goto label_42cb78;
        }
    }
    ctx->pc = 0x42CB44u;
label_42cb44:
    // 0x42cb44: 0x0  nop
    ctx->pc = 0x42cb44u;
    // NOP
label_42cb48:
    // 0x42cb48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42cb4c:
    // 0x42cb4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x42cb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42cb50:
    // 0x42cb50: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x42cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_42cb54:
    // 0x42cb54: 0x8fc60648  lw          $a2, 0x648($fp)
    ctx->pc = 0x42cb54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_42cb58:
    // 0x42cb58: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x42cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_42cb5c:
    // 0x42cb5c: 0x60f809  jalr        $v1
label_42cb60:
    if (ctx->pc == 0x42CB60u) {
        ctx->pc = 0x42CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CB5Cu;
        // 0x42cb60: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CB64u;
        goto label_42cb64;
    }
    ctx->pc = 0x42CB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42CB64u);
        ctx->pc = 0x42CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CB5Cu;
        // 0x42cb60: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CB5Cu, 0x42CB64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42CB64u;
label_42cb64:
    // 0x42cb64: 0x8fc30648  lw          $v1, 0x648($fp)
    ctx->pc = 0x42cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_42cb68:
    // 0x42cb68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42cb6c:
    // 0x42cb6c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_42cb70:
    if (ctx->pc == 0x42CB70u) {
        ctx->pc = 0x42CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CB6Cu;
        // 0x42cb70: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CB74u;
        goto label_42cb74;
    }
    ctx->pc = 0x42CB6Cu;
    {
        const bool branch_taken_0x42cb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CB6Cu;
        // 0x42cb70: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cb6c) {
            ctx->pc = 0x42CB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42cb48;
        }
    }
    ctx->pc = 0x42CB74u;
label_42cb74:
    // 0x42cb74: 0x8fc5064c  lw          $a1, 0x64C($fp)
    ctx->pc = 0x42cb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
label_42cb78:
    // 0x42cb78: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x42cb78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_42cb7c:
    // 0x42cb7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x42cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42cb80:
    // 0x42cb80: 0x10000003  b           . + 4 + (0x3 << 2)
label_42cb84:
    if (ctx->pc == 0x42CB84u) {
        ctx->pc = 0x42CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CB80u;
        // 0x42cb84: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CB88u;
        goto label_42cb88;
    }
    ctx->pc = 0x42CB80u;
    {
        const bool branch_taken_0x42cb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CB80u;
        // 0x42cb84: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cb80) {
            ctx->pc = 0x42CB90u;
            goto label_42cb90;
        }
    }
    ctx->pc = 0x42CB88u;
label_42cb88:
    // 0x42cb88: 0xc10b22a  jal         func_42C8A8
label_42cb8c:
    if (ctx->pc == 0x42CB8Cu) {
        ctx->pc = 0x42CB90u;
        goto label_42cb90;
    }
    ctx->pc = 0x42CB88u;
    SET_GPR_U32(ctx, 31, 0x42CB90u);
    ctx->pc = 0x42C8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C8A8u, 0x42CB88u, 0x42CB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42CB90u;
label_42cb90:
    // 0x42cb90: 0x8fc30640  lw          $v1, 0x640($fp)
    ctx->pc = 0x42cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1600)));
label_42cb94:
    // 0x42cb94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x42cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_42cb98:
    // 0x42cb98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_42cb9c:
    if (ctx->pc == 0x42CB9Cu) {
        ctx->pc = 0x42CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CB98u;
        // 0x42cb9c: 0x8fc50644  lw          $a1, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CBA0u;
        goto label_42cba0;
    }
    ctx->pc = 0x42CB98u;
    {
        const bool branch_taken_0x42cb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CB98u;
        // 0x42cb9c: 0x8fc50644  lw          $a1, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cb98) {
            ctx->pc = 0x42CBB0u;
            goto label_42cbb0;
        }
    }
    ctx->pc = 0x42CBA0u;
label_42cba0:
    // 0x42cba0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x42cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42cba4:
    // 0x42cba4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x42cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42cba8:
    // 0x42cba8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_42cbac:
    if (ctx->pc == 0x42CBACu) {
        ctx->pc = 0x42CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CBA8u;
        // 0x42cbac: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CBB0u;
        goto label_42cbb0;
    }
    ctx->pc = 0x42CBA8u;
    {
        const bool branch_taken_0x42cba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CBA8u;
        // 0x42cbac: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cba8) {
            ctx->pc = 0x42CBCCu;
            goto label_42cbcc;
        }
    }
    ctx->pc = 0x42CBB0u;
label_42cbb0:
    // 0x42cbb0: 0xc10b22a  jal         func_42C8A8
label_42cbb4:
    if (ctx->pc == 0x42CBB4u) {
        ctx->pc = 0x42CBB8u;
        goto label_42cbb8;
    }
    ctx->pc = 0x42CBB0u;
    SET_GPR_U32(ctx, 31, 0x42CBB8u);
    ctx->pc = 0x42C8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C8A8u, 0x42CBB0u, 0x42CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42CBB8u;
label_42cbb8:
    // 0x42cbb8: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x42cbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_42cbbc:
    // 0x42cbbc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x42cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42cbc0:
    // 0x42cbc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x42cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42cbc4:
    // 0x42cbc4: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x42cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_42cbc8:
    // 0x42cbc8: 0x8fc50644  lw          $a1, 0x644($fp)
    ctx->pc = 0x42cbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_42cbcc:
    // 0x42cbcc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x42cbccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_42cbd0:
    // 0x42cbd0: 0x8c9e0008  lw          $fp, 0x8($a0)
    ctx->pc = 0x42cbd0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_42cbd4:
    // 0x42cbd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x42cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_42cbd8:
    // 0x42cbd8: 0x400008  jr          $v0
label_42cbdc:
    if (ctx->pc == 0x42CBDCu) {
        ctx->pc = 0x42CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CBD8u;
        // 0x42cbdc: 0x8c7d0008  lw          $sp, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CBE0u;
        goto label_42cbe0;
    }
    ctx->pc = 0x42CBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x42CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CBD8u;
        // 0x42cbdc: 0x8c7d0008  lw          $sp, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CBD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42CBE0u;
label_42cbe0:
    // 0x42cbe0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_42cbe4:
    // 0x42cbe4: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x42cbe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_42cbe8:
    // 0x42cbe8: 0x8c6254c8  lw          $v0, 0x54C8($v1)
    ctx->pc = 0x42cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21704)));
label_42cbec:
    // 0x42cbec: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x42cbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_42cbf0:
    // 0x42cbf0: 0xffbe06d0  sd          $fp, 0x6D0($sp)
    ctx->pc = 0x42cbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1744), GPR_U64(ctx, 30));
label_42cbf4:
    // 0x42cbf4: 0xffb706c0  sd          $s7, 0x6C0($sp)
    ctx->pc = 0x42cbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1728), GPR_U64(ctx, 23));
label_42cbf8:
    // 0x42cbf8: 0xffb606b0  sd          $s6, 0x6B0($sp)
    ctx->pc = 0x42cbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1712), GPR_U64(ctx, 22));
label_42cbfc:
    // 0x42cbfc: 0xffb506a0  sd          $s5, 0x6A0($sp)
    ctx->pc = 0x42cbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 21));
label_42cc00:
    // 0x42cc00: 0xffb40690  sd          $s4, 0x690($sp)
    ctx->pc = 0x42cc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 20));
label_42cc04:
    // 0x42cc04: 0xffb30680  sd          $s3, 0x680($sp)
    ctx->pc = 0x42cc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 19));
label_42cc08:
    // 0x42cc08: 0xffb20670  sd          $s2, 0x670($sp)
    ctx->pc = 0x42cc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 18));
label_42cc0c:
    // 0x42cc0c: 0xffb10660  sd          $s1, 0x660($sp)
    ctx->pc = 0x42cc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 17));
label_42cc10:
    // 0x42cc10: 0xffb00650  sd          $s0, 0x650($sp)
    ctx->pc = 0x42cc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 16));
label_42cc14:
    // 0x42cc14: 0xe7bf0748  swc1        $f31, 0x748($sp)
    ctx->pc = 0x42cc14u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1864), bits); }
label_42cc18:
    // 0x42cc18: 0xe7be0740  swc1        $f30, 0x740($sp)
    ctx->pc = 0x42cc18u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_42cc1c:
    // 0x42cc1c: 0xe7bd0738  swc1        $f29, 0x738($sp)
    ctx->pc = 0x42cc1cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_42cc20:
    // 0x42cc20: 0xe7bc0730  swc1        $f28, 0x730($sp)
    ctx->pc = 0x42cc20u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_42cc24:
    // 0x42cc24: 0xe7bb0728  swc1        $f27, 0x728($sp)
    ctx->pc = 0x42cc24u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_42cc28:
    // 0x42cc28: 0xe7ba0720  swc1        $f26, 0x720($sp)
    ctx->pc = 0x42cc28u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_42cc2c:
    // 0x42cc2c: 0xe7b90718  swc1        $f25, 0x718($sp)
    ctx->pc = 0x42cc2cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_42cc30:
    // 0x42cc30: 0xe7b80710  swc1        $f24, 0x710($sp)
    ctx->pc = 0x42cc30u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_42cc34:
    // 0x42cc34: 0xe7b70708  swc1        $f23, 0x708($sp)
    ctx->pc = 0x42cc34u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_42cc38:
    // 0x42cc38: 0xe7b60700  swc1        $f22, 0x700($sp)
    ctx->pc = 0x42cc38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_42cc3c:
    // 0x42cc3c: 0xe7b506f8  swc1        $f21, 0x6F8($sp)
    ctx->pc = 0x42cc3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_42cc40:
    // 0x42cc40: 0x40f809  jalr        $v0
label_42cc44:
    if (ctx->pc == 0x42CC44u) {
        ctx->pc = 0x42CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CC40u;
        // 0x42cc44: 0xe7b406f0  swc1        $f20, 0x6F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CC48u;
        goto label_42cc48;
    }
    ctx->pc = 0x42CC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42CC48u);
        ctx->pc = 0x42CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CC40u;
        // 0x42cc44: 0xe7b406f0  swc1        $f20, 0x6F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CC40u, 0x42CC48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42CC48u;
label_42cc48:
    // 0x42cc48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x42cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42cc4c:
    // 0x42cc4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x42cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_42cc50:
    // 0x42cc50: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x42cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_42cc54:
    // 0x42cc54: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x42cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_42cc58:
    // 0x42cc58: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x42cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_42cc5c:
    // 0x42cc5c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x42cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_42cc60:
    // 0x42cc60: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_42cc64:
    if (ctx->pc == 0x42CC64u) {
        ctx->pc = 0x42CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CC60u;
        // 0x42cc64: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CC68u;
        goto label_42cc68;
    }
    ctx->pc = 0x42CC60u;
    {
        const bool branch_taken_0x42cc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CC60u;
        // 0x42cc64: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cc60) {
            ctx->pc = 0x42CCE4u;
            return;
        }
    }
    ctx->pc = 0x42CC68u;
label_42cc68:
    // 0x42cc68: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x42cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_42cc6c:
    // 0x42cc6c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x42cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_42cc70:
    // 0x42cc70: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x42cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_42cc74:
    // 0x42cc74: 0xafbd0008  sw          $sp, 0x8($sp)
    ctx->pc = 0x42cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 29));
label_42cc78:
    // 0x42cc78: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x42cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_42cc7c:
    // 0x42cc7c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x42cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_42cc80:
    // 0x42cc80: 0xafbd0648  sw          $sp, 0x648($sp)
    ctx->pc = 0x42cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1608), GPR_U32(ctx, 29));
label_42cc84:
    // 0x42cc84: 0xac7d0008  sw          $sp, 0x8($v1)
    ctx->pc = 0x42cc84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
    ctx->pc = 0x42cc88u;
}
