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

// Function: sub_001C7128
// Address: 0x1c7128 - 0x1c7370
void sub_001C7128_0x1c7128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7128_0x1c7128");
#endif

    switch (ctx->pc) {
        case 0x1c7128u: goto label_1c7128;
        case 0x1c712cu: goto label_1c712c;
        case 0x1c7130u: goto label_1c7130;
        case 0x1c7134u: goto label_1c7134;
        case 0x1c7138u: goto label_1c7138;
        case 0x1c713cu: goto label_1c713c;
        case 0x1c7140u: goto label_1c7140;
        case 0x1c7144u: goto label_1c7144;
        case 0x1c7148u: goto label_1c7148;
        case 0x1c714cu: goto label_1c714c;
        case 0x1c7150u: goto label_1c7150;
        case 0x1c7154u: goto label_1c7154;
        case 0x1c7158u: goto label_1c7158;
        case 0x1c715cu: goto label_1c715c;
        case 0x1c7160u: goto label_1c7160;
        case 0x1c7164u: goto label_1c7164;
        case 0x1c7168u: goto label_1c7168;
        case 0x1c716cu: goto label_1c716c;
        case 0x1c7170u: goto label_1c7170;
        case 0x1c7174u: goto label_1c7174;
        case 0x1c7178u: goto label_1c7178;
        case 0x1c717cu: goto label_1c717c;
        case 0x1c7180u: goto label_1c7180;
        case 0x1c7184u: goto label_1c7184;
        case 0x1c7188u: goto label_1c7188;
        case 0x1c718cu: goto label_1c718c;
        case 0x1c7190u: goto label_1c7190;
        case 0x1c7194u: goto label_1c7194;
        case 0x1c7198u: goto label_1c7198;
        case 0x1c719cu: goto label_1c719c;
        case 0x1c71a0u: goto label_1c71a0;
        case 0x1c71a4u: goto label_1c71a4;
        case 0x1c71a8u: goto label_1c71a8;
        case 0x1c71acu: goto label_1c71ac;
        case 0x1c71b0u: goto label_1c71b0;
        case 0x1c71b4u: goto label_1c71b4;
        case 0x1c71b8u: goto label_1c71b8;
        case 0x1c71bcu: goto label_1c71bc;
        case 0x1c71c0u: goto label_1c71c0;
        case 0x1c71c4u: goto label_1c71c4;
        case 0x1c71c8u: goto label_1c71c8;
        case 0x1c71ccu: goto label_1c71cc;
        case 0x1c71d0u: goto label_1c71d0;
        case 0x1c71d4u: goto label_1c71d4;
        case 0x1c71d8u: goto label_1c71d8;
        case 0x1c71dcu: goto label_1c71dc;
        case 0x1c71e0u: goto label_1c71e0;
        case 0x1c71e4u: goto label_1c71e4;
        case 0x1c71e8u: goto label_1c71e8;
        case 0x1c71ecu: goto label_1c71ec;
        case 0x1c71f0u: goto label_1c71f0;
        case 0x1c71f4u: goto label_1c71f4;
        case 0x1c71f8u: goto label_1c71f8;
        case 0x1c71fcu: goto label_1c71fc;
        case 0x1c7200u: goto label_1c7200;
        case 0x1c7204u: goto label_1c7204;
        case 0x1c7208u: goto label_1c7208;
        case 0x1c720cu: goto label_1c720c;
        case 0x1c7210u: goto label_1c7210;
        case 0x1c7214u: goto label_1c7214;
        case 0x1c7218u: goto label_1c7218;
        case 0x1c721cu: goto label_1c721c;
        case 0x1c7220u: goto label_1c7220;
        case 0x1c7224u: goto label_1c7224;
        case 0x1c7228u: goto label_1c7228;
        case 0x1c722cu: goto label_1c722c;
        case 0x1c7230u: goto label_1c7230;
        case 0x1c7234u: goto label_1c7234;
        case 0x1c7238u: goto label_1c7238;
        case 0x1c723cu: goto label_1c723c;
        case 0x1c7240u: goto label_1c7240;
        case 0x1c7244u: goto label_1c7244;
        case 0x1c7248u: goto label_1c7248;
        case 0x1c724cu: goto label_1c724c;
        case 0x1c7250u: goto label_1c7250;
        case 0x1c7254u: goto label_1c7254;
        case 0x1c7258u: goto label_1c7258;
        case 0x1c725cu: goto label_1c725c;
        case 0x1c7260u: goto label_1c7260;
        case 0x1c7264u: goto label_1c7264;
        case 0x1c7268u: goto label_1c7268;
        case 0x1c726cu: goto label_1c726c;
        case 0x1c7270u: goto label_1c7270;
        case 0x1c7274u: goto label_1c7274;
        case 0x1c7278u: goto label_1c7278;
        case 0x1c727cu: goto label_1c727c;
        case 0x1c7280u: goto label_1c7280;
        case 0x1c7284u: goto label_1c7284;
        case 0x1c7288u: goto label_1c7288;
        case 0x1c728cu: goto label_1c728c;
        case 0x1c7290u: goto label_1c7290;
        case 0x1c7294u: goto label_1c7294;
        case 0x1c7298u: goto label_1c7298;
        case 0x1c729cu: goto label_1c729c;
        case 0x1c72a0u: goto label_1c72a0;
        case 0x1c72a4u: goto label_1c72a4;
        case 0x1c72a8u: goto label_1c72a8;
        case 0x1c72acu: goto label_1c72ac;
        case 0x1c72b0u: goto label_1c72b0;
        case 0x1c72b4u: goto label_1c72b4;
        case 0x1c72b8u: goto label_1c72b8;
        case 0x1c72bcu: goto label_1c72bc;
        case 0x1c72c0u: goto label_1c72c0;
        case 0x1c72c4u: goto label_1c72c4;
        case 0x1c72c8u: goto label_1c72c8;
        case 0x1c72ccu: goto label_1c72cc;
        case 0x1c72d0u: goto label_1c72d0;
        case 0x1c72d4u: goto label_1c72d4;
        case 0x1c72d8u: goto label_1c72d8;
        case 0x1c72dcu: goto label_1c72dc;
        case 0x1c72e0u: goto label_1c72e0;
        case 0x1c72e4u: goto label_1c72e4;
        case 0x1c72e8u: goto label_1c72e8;
        case 0x1c72ecu: goto label_1c72ec;
        case 0x1c72f0u: goto label_1c72f0;
        case 0x1c72f4u: goto label_1c72f4;
        case 0x1c72f8u: goto label_1c72f8;
        case 0x1c72fcu: goto label_1c72fc;
        case 0x1c7300u: goto label_1c7300;
        case 0x1c7304u: goto label_1c7304;
        case 0x1c7308u: goto label_1c7308;
        case 0x1c730cu: goto label_1c730c;
        case 0x1c7310u: goto label_1c7310;
        case 0x1c7314u: goto label_1c7314;
        case 0x1c7318u: goto label_1c7318;
        case 0x1c731cu: goto label_1c731c;
        case 0x1c7320u: goto label_1c7320;
        case 0x1c7324u: goto label_1c7324;
        case 0x1c7328u: goto label_1c7328;
        case 0x1c732cu: goto label_1c732c;
        case 0x1c7330u: goto label_1c7330;
        case 0x1c7334u: goto label_1c7334;
        case 0x1c7338u: goto label_1c7338;
        case 0x1c733cu: goto label_1c733c;
        case 0x1c7340u: goto label_1c7340;
        case 0x1c7344u: goto label_1c7344;
        case 0x1c7348u: goto label_1c7348;
        case 0x1c734cu: goto label_1c734c;
        case 0x1c7350u: goto label_1c7350;
        case 0x1c7354u: goto label_1c7354;
        case 0x1c7358u: goto label_1c7358;
        case 0x1c735cu: goto label_1c735c;
        case 0x1c7360u: goto label_1c7360;
        case 0x1c7364u: goto label_1c7364;
        case 0x1c7368u: goto label_1c7368;
        case 0x1c736cu: goto label_1c736c;
        default: break;
    }

    ctx->pc = 0x1c7128u;

label_1c7128:
    // 0x1c7128: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c7128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1c712c:
    // 0x1c712c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1c712cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_1c7130:
    // 0x1c7130: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1c7130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1c7134:
    // 0x1c7134: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1c7134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1c7138:
    // 0x1c7138: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c7138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c713c:
    // 0x1c713c: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x1c713cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1c7140:
    // 0x1c7140: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x1c7140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
label_1c7144:
    // 0x1c7144: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1c7144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1c7148:
    // 0x1c7148: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1c7148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1c714c:
    // 0x1c714c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c714cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7150:
    // 0x1c7150: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1c7150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1c7154:
    // 0x1c7154: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7158:
    // 0x1c7158: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1c7158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1c715c:
    // 0x1c715c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1c7160:
    // 0x1c7160: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1c7160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1c7164:
    // 0x1c7164: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1c7164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1c7168:
    // 0x1c7168: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c7168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1c716c:
    // 0x1c716c: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x1c716cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
label_1c7170:
    // 0x1c7170: 0xc071bf2  jal         func_1C6FC8
label_1c7174:
    if (ctx->pc == 0x1C7174u) {
        ctx->pc = 0x1C7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7170u;
        // 0x1c7174: 0xafa80028  sw          $t0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7178u;
        goto label_1c7178;
    }
    ctx->pc = 0x1C7170u;
    SET_GPR_U32(ctx, 31, 0x1C7178u);
    ctx->pc = 0x1C7174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7170u;
    // 0x1c7174: 0xafa80028  sw          $t0, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6FC8u, 0x1C7170u, 0x1C7178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7178u;
label_1c7178:
    // 0x1c7178: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x1c7178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c717c:
    // 0x1c717c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1c7180:
    if (ctx->pc == 0x1C7180u) {
        ctx->pc = 0x1C7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C717Cu;
        // 0x1c7180: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7184u;
        goto label_1c7184;
    }
    ctx->pc = 0x1C717Cu;
    {
        const bool branch_taken_0x1c717c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C717Cu;
        // 0x1c7180: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c717c) {
            ctx->pc = 0x1C71A4u;
            goto label_1c71a4;
        }
    }
    ctx->pc = 0x1C7184u;
label_1c7184:
    // 0x1c7184: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1c7184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1c7188:
    // 0x1c7188: 0xc067b9c  jal         func_19EE70
label_1c718c:
    if (ctx->pc == 0x1C718Cu) {
        ctx->pc = 0x1C718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7188u;
        // 0x1c718c: 0x26300150  addiu       $s0, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7190u;
        goto label_1c7190;
    }
    ctx->pc = 0x1C7188u;
    SET_GPR_U32(ctx, 31, 0x1C7190u);
    ctx->pc = 0x1C718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7188u;
    // 0x1c718c: 0x26300150  addiu       $s0, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1C7188u, 0x1C7190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7190u;
label_1c7190:
    // 0x1c7190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7194:
    // 0x1c7194: 0xc073b0a  jal         func_1CEC28
label_1c7198:
    if (ctx->pc == 0x1C7198u) {
        ctx->pc = 0x1C7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7194u;
        // 0x1c7198: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C719Cu;
        goto label_1c719c;
    }
    ctx->pc = 0x1C7194u;
    SET_GPR_U32(ctx, 31, 0x1C719Cu);
    ctx->pc = 0x1C7198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7194u;
    // 0x1c7198: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1C7194u, 0x1C719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C719Cu;
label_1c719c:
    // 0x1c719c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c71a0:
    if (ctx->pc == 0x1C71A0u) {
        ctx->pc = 0x1C71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C719Cu;
        // 0x1c71a0: 0x8e220510  lw          $v0, 0x510($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C71A4u;
        goto label_1c71a4;
    }
    ctx->pc = 0x1C719Cu;
    {
        const bool branch_taken_0x1c719c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C719Cu;
        // 0x1c71a0: 0x8e220510  lw          $v0, 0x510($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c719c) {
            ctx->pc = 0x1C71BCu;
            goto label_1c71bc;
        }
    }
    ctx->pc = 0x1C71A4u;
label_1c71a4:
    // 0x1c71a4: 0xc067b9c  jal         func_19EE70
label_1c71a8:
    if (ctx->pc == 0x1C71A8u) {
        ctx->pc = 0x1C71A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71A4u;
        // 0x1c71a8: 0x26300150  addiu       $s0, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C71ACu;
        goto label_1c71ac;
    }
    ctx->pc = 0x1C71A4u;
    SET_GPR_U32(ctx, 31, 0x1C71ACu);
    ctx->pc = 0x1C71A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C71A4u;
    // 0x1c71a8: 0x26300150  addiu       $s0, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1C71A4u, 0x1C71ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71ACu;
label_1c71ac:
    // 0x1c71ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c71acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c71b0:
    // 0x1c71b0: 0xc073b0a  jal         func_1CEC28
label_1c71b4:
    if (ctx->pc == 0x1C71B4u) {
        ctx->pc = 0x1C71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71B0u;
        // 0x1c71b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C71B8u;
        goto label_1c71b8;
    }
    ctx->pc = 0x1C71B0u;
    SET_GPR_U32(ctx, 31, 0x1C71B8u);
    ctx->pc = 0x1C71B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C71B0u;
    // 0x1c71b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1C71B0u, 0x1C71B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71B8u;
label_1c71b8:
    // 0x1c71b8: 0x8e220510  lw          $v0, 0x510($s1)
    ctx->pc = 0x1c71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1296)));
label_1c71bc:
    // 0x1c71bc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1c71c0:
    if (ctx->pc == 0x1C71C0u) {
        ctx->pc = 0x1C71C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71BCu;
        // 0x1c71c0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C71C4u;
        goto label_1c71c4;
    }
    ctx->pc = 0x1C71BCu;
    {
        const bool branch_taken_0x1c71bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C71C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71BCu;
        // 0x1c71c0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71bc) {
            ctx->pc = 0x1C71ECu;
            goto label_1c71ec;
        }
    }
    ctx->pc = 0x1C71C4u;
label_1c71c4:
    // 0x1c71c4: 0x26250514  addiu       $a1, $s1, 0x514
    ctx->pc = 0x1c71c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1300));
label_1c71c8:
    // 0x1c71c8: 0xc04456a  jal         func_1115A8
label_1c71cc:
    if (ctx->pc == 0x1C71CCu) {
        ctx->pc = 0x1C71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71C8u;
        // 0x1c71cc: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C71D0u;
        goto label_1c71d0;
    }
    ctx->pc = 0x1C71C8u;
    SET_GPR_U32(ctx, 31, 0x1C71D0u);
    ctx->pc = 0x1C71CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C71C8u;
    // 0x1c71cc: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115A8u, 0x1C71C8u, 0x1C71D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71D0u;
label_1c71d0:
    // 0x1c71d0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1c71d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1c71d4:
    // 0x1c71d4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c71d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c71d8:
    // 0x1c71d8: 0x24a55308  addiu       $a1, $a1, 0x5308
    ctx->pc = 0x1c71d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21256));
label_1c71dc:
    // 0x1c71dc: 0xc043e94  jal         func_10FA50
label_1c71e0:
    if (ctx->pc == 0x1C71E0u) {
        ctx->pc = 0x1C71E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71DCu;
        // 0x1c71e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C71E4u;
        goto label_1c71e4;
    }
    ctx->pc = 0x1C71DCu;
    SET_GPR_U32(ctx, 31, 0x1C71E4u);
    ctx->pc = 0x1C71E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C71DCu;
    // 0x1c71e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x1C71DCu, 0x1C71E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71E4u;
label_1c71e4:
    // 0x1c71e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c71e8:
    // 0x1c71e8: 0xae220510  sw          $v0, 0x510($s1)
    ctx->pc = 0x1c71e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1296), GPR_U32(ctx, 2));
label_1c71ec:
    // 0x1c71ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c71ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c71f0:
    // 0x1c71f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c71f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c71f4:
    // 0x1c71f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c71f8:
    // 0x1c71f8: 0xc442ea2c  lwc1        $f2, -0x15D4($v0)
    ctx->pc = 0x1c71f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c71fc:
    // 0x1c71fc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1c71fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c7200:
    // 0x1c7200: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c7200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c7204:
    // 0x1c7204: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7208:
    // 0x1c7208: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x1c7208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1c720c:
    // 0x1c720c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1c720cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1c7210:
    // 0x1c7210: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c7210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7214:
    // 0x1c7214: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x1c7214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
label_1c7218:
    // 0x1c7218: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c7218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c721c:
    // 0x1c721c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x1c721cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1c7220:
    // 0x1c7220: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7224:
    // 0x1c7224: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x1c7224u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c7228:
    // 0x1c7228: 0x26270050  addiu       $a3, $s1, 0x50
    ctx->pc = 0x1c7228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1c722c:
    // 0x1c722c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c722cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1c7230:
    // 0x1c7230: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1c7230u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7234:
    // 0x1c7234: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c7234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7238:
    // 0x1c7238: 0xc075044  jal         func_1D4110
label_1c723c:
    if (ctx->pc == 0x1C723Cu) {
        ctx->pc = 0x1C723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7238u;
        // 0x1c723c: 0xc7ac0018  lwc1        $f12, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7240u;
        goto label_1c7240;
    }
    ctx->pc = 0x1C7238u;
    SET_GPR_U32(ctx, 31, 0x1C7240u);
    ctx->pc = 0x1C723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7238u;
    // 0x1c723c: 0xc7ac0018  lwc1        $f12, 0x18($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1C7238u, 0x1C7240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7240u;
label_1c7240:
    // 0x1c7240: 0x12600034  beqz        $s3, . + 4 + (0x34 << 2)
label_1c7244:
    if (ctx->pc == 0x1C7244u) {
        ctx->pc = 0x1C7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7240u;
        // 0x1c7244: 0x262204f0  addiu       $v0, $s1, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7248u;
        goto label_1c7248;
    }
    ctx->pc = 0x1C7240u;
    {
        const bool branch_taken_0x1c7240 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7240u;
        // 0x1c7244: 0x262204f0  addiu       $v0, $s1, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7240) {
            ctx->pc = 0x1C7314u;
            goto label_1c7314;
        }
    }
    ctx->pc = 0x1C7248u;
label_1c7248:
    // 0x1c7248: 0x267effff  addiu       $fp, $s3, -0x1
    ctx->pc = 0x1c7248u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1c724c:
    // 0x1c724c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1c724cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1c7250:
    // 0x1c7250: 0x2e770002  sltiu       $s7, $s3, 0x2
    ctx->pc = 0x1c7250u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c7254:
    // 0x1c7254: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1c7254u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_1c7258:
    // 0x1c7258: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1c7258u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c725c:
    // 0x1c725c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1c725cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1c7260:
    // 0x1c7260: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x1c7260u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1c7264:
    // 0x1c7264: 0x21e2826  xor         $a1, $s0, $fp
    ctx->pc = 0x1c7264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 30));
label_1c7268:
    // 0x1c7268: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x1c7268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1c726c:
    // 0x1c726c: 0x5a00a  movz        $s4, $zero, $a1
    ctx->pc = 0x1c726cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_1c7270:
    // 0x1c7270: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1c7270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1c7274:
    // 0x1c7274: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1c7274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1c7278:
    // 0x1c7278: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c7278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c727c:
    // 0x1c727c: 0x16e00012  bnez        $s7, . + 4 + (0x12 << 2)
label_1c7280:
    if (ctx->pc == 0x1C7280u) {
        ctx->pc = 0x1C7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C727Cu;
        // 0x1c7280: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7284u;
        goto label_1c7284;
    }
    ctx->pc = 0x1C727Cu;
    {
        const bool branch_taken_0x1c727c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C727Cu;
        // 0x1c7280: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c727c) {
            ctx->pc = 0x1C72C8u;
            goto label_1c72c8;
        }
    }
    ctx->pc = 0x1C7284u;
label_1c7284:
    // 0x1c7284: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1c7284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1c7288:
    // 0x1c7288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c7288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c728c:
    // 0x1c728c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1c728cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1c7290:
    // 0x1c7290: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c7290u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1c7294:
    // 0x1c7294: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c7294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c7298:
    // 0x1c7298: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c729c:
    // 0x1c729c: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x1c729cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1c72a0:
    // 0x1c72a0: 0x8ecad320  lw          $t2, -0x2CE0($s6)
    ctx->pc = 0x1c72a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294955808)));
label_1c72a4:
    // 0x1c72a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c72a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c72a8:
    // 0x1c72a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1c72a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c72ac:
    // 0x1c72ac: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x1c72acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_1c72b0:
    // 0x1c72b0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1c72b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c72b4:
    // 0x1c72b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c72b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c72b8:
    // 0x1c72b8: 0xc07508c  jal         func_1D4230
label_1c72bc:
    if (ctx->pc == 0x1C72BCu) {
        ctx->pc = 0x1C72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72B8u;
        // 0x1c72bc: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C72C0u;
        goto label_1c72c0;
    }
    ctx->pc = 0x1C72B8u;
    SET_GPR_U32(ctx, 31, 0x1C72C0u);
    ctx->pc = 0x1C72BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72B8u;
    // 0x1c72bc: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1C72B8u, 0x1C72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C72C0u;
label_1c72c0:
    // 0x1c72c0: 0x10000010  b           . + 4 + (0x10 << 2)
label_1c72c4:
    if (ctx->pc == 0x1C72C4u) {
        ctx->pc = 0x1C72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72C0u;
        // 0x1c72c4: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C72C8u;
        goto label_1c72c8;
    }
    ctx->pc = 0x1C72C0u;
    {
        const bool branch_taken_0x1c72c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72C0u;
        // 0x1c72c4: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72c0) {
            ctx->pc = 0x1C7304u;
            goto label_1c7304;
        }
    }
    ctx->pc = 0x1C72C8u;
label_1c72c8:
    // 0x1c72c8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1c72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1c72cc:
    // 0x1c72cc: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1c72ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1c72d0:
    // 0x1c72d0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c72d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1c72d4:
    // 0x1c72d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c72d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c72d8:
    // 0x1c72d8: 0x8ecad320  lw          $t2, -0x2CE0($s6)
    ctx->pc = 0x1c72d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294955808)));
label_1c72dc:
    // 0x1c72dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c72dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c72e0:
    // 0x1c72e0: 0x24455310  addiu       $a1, $v0, 0x5310
    ctx->pc = 0x1c72e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21264));
label_1c72e4:
    // 0x1c72e4: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x1c72e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_1c72e8:
    // 0x1c72e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c72e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c72ec:
    // 0x1c72ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c72ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c72f0:
    // 0x1c72f0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1c72f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c72f4:
    // 0x1c72f4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c72f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c72f8:
    // 0x1c72f8: 0xc07508c  jal         func_1D4230
label_1c72fc:
    if (ctx->pc == 0x1C72FCu) {
        ctx->pc = 0x1C72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72F8u;
        // 0x1c72fc: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7300u;
        goto label_1c7300;
    }
    ctx->pc = 0x1C72F8u;
    SET_GPR_U32(ctx, 31, 0x1C7300u);
    ctx->pc = 0x1C72FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72F8u;
    // 0x1c72fc: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1C72F8u, 0x1C7300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7300u;
label_1c7300:
    // 0x1c7300: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1c7300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c7304:
    // 0x1c7304: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1c7304u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c7308:
    // 0x1c7308: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x1c7308u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1c730c:
    // 0x1c730c: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_1c7310:
    if (ctx->pc == 0x1C7310u) {
        ctx->pc = 0x1C7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C730Cu;
        // 0x1c7310: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7314u;
        goto label_1c7314;
    }
    ctx->pc = 0x1C730Cu;
    {
        const bool branch_taken_0x1c730c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C730Cu;
        // 0x1c7310: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c730c) {
            ctx->pc = 0x1C7260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7260;
        }
    }
    ctx->pc = 0x1C7314u;
label_1c7314:
    // 0x1c7314: 0xc07534a  jal         func_1D4D28
label_1c7318:
    if (ctx->pc == 0x1C7318u) {
        ctx->pc = 0x1C7318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7314u;
        // 0x1c7318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C731Cu;
        goto label_1c731c;
    }
    ctx->pc = 0x1C7314u;
    SET_GPR_U32(ctx, 31, 0x1C731Cu);
    ctx->pc = 0x1C7318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7314u;
    // 0x1c7318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4D28u, 0x1C7314u, 0x1C731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C731Cu;
label_1c731c:
    // 0x1c731c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1c731cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c7320:
    // 0x1c7320: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c7320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c7324:
    // 0x1c7324: 0xc0752e2  jal         func_1D4B88
label_1c7328:
    if (ctx->pc == 0x1C7328u) {
        ctx->pc = 0x1C7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7324u;
        // 0x1c7328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C732Cu;
        goto label_1c732c;
    }
    ctx->pc = 0x1C7324u;
    SET_GPR_U32(ctx, 31, 0x1C732Cu);
    ctx->pc = 0x1C7328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7324u;
    // 0x1c7328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x1C7324u, 0x1C732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C732Cu;
label_1c732c:
    // 0x1c732c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c7330:
    // 0x1c7330: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c7330u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1c7334:
    // 0x1c7334: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1c7334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1c7338:
    // 0x1c7338: 0x60f809  jalr        $v1
label_1c733c:
    if (ctx->pc == 0x1C733Cu) {
        ctx->pc = 0x1C733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7338u;
        // 0x1c733c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7340u;
        goto label_1c7340;
    }
    ctx->pc = 0x1C7338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C7340u);
        ctx->pc = 0x1C733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7338u;
        // 0x1c733c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7338u, 0x1C7340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7340u;
label_1c7340:
    // 0x1c7340: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1c7340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c7344:
    // 0x1c7344: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1c7344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1c7348:
    // 0x1c7348: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1c7348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1c734c:
    // 0x1c734c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1c734cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c7350:
    // 0x1c7350: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1c7350u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c7354:
    // 0x1c7354: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1c7354u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c7358:
    // 0x1c7358: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c7358u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c735c:
    // 0x1c735c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1c735cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c7360:
    // 0x1c7360: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1c7360u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c7364:
    // 0x1c7364: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c7364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c7368:
    // 0x1c7368: 0x3e00008  jr          $ra
label_1c736c:
    if (ctx->pc == 0x1C736Cu) {
        ctx->pc = 0x1C736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7368u;
        // 0x1c736c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7370u;
        goto label_fallthrough_0x1c7368;
    }
    ctx->pc = 0x1C7368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7368u;
        // 0x1c736c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c7368:
    ctx->pc = 0x1C7370u;
}
