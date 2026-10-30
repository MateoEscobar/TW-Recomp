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

// Function: sub_002C7248
// Address: 0x2c7248 - 0x2c73b8
void sub_002C7248_0x2c7248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7248_0x2c7248");
#endif

    switch (ctx->pc) {
        case 0x2c7248u: goto label_2c7248;
        case 0x2c724cu: goto label_2c724c;
        case 0x2c7250u: goto label_2c7250;
        case 0x2c7254u: goto label_2c7254;
        case 0x2c7258u: goto label_2c7258;
        case 0x2c725cu: goto label_2c725c;
        case 0x2c7260u: goto label_2c7260;
        case 0x2c7264u: goto label_2c7264;
        case 0x2c7268u: goto label_2c7268;
        case 0x2c726cu: goto label_2c726c;
        case 0x2c7270u: goto label_2c7270;
        case 0x2c7274u: goto label_2c7274;
        case 0x2c7278u: goto label_2c7278;
        case 0x2c727cu: goto label_2c727c;
        case 0x2c7280u: goto label_2c7280;
        case 0x2c7284u: goto label_2c7284;
        case 0x2c7288u: goto label_2c7288;
        case 0x2c728cu: goto label_2c728c;
        case 0x2c7290u: goto label_2c7290;
        case 0x2c7294u: goto label_2c7294;
        case 0x2c7298u: goto label_2c7298;
        case 0x2c729cu: goto label_2c729c;
        case 0x2c72a0u: goto label_2c72a0;
        case 0x2c72a4u: goto label_2c72a4;
        case 0x2c72a8u: goto label_2c72a8;
        case 0x2c72acu: goto label_2c72ac;
        case 0x2c72b0u: goto label_2c72b0;
        case 0x2c72b4u: goto label_2c72b4;
        case 0x2c72b8u: goto label_2c72b8;
        case 0x2c72bcu: goto label_2c72bc;
        case 0x2c72c0u: goto label_2c72c0;
        case 0x2c72c4u: goto label_2c72c4;
        case 0x2c72c8u: goto label_2c72c8;
        case 0x2c72ccu: goto label_2c72cc;
        case 0x2c72d0u: goto label_2c72d0;
        case 0x2c72d4u: goto label_2c72d4;
        case 0x2c72d8u: goto label_2c72d8;
        case 0x2c72dcu: goto label_2c72dc;
        case 0x2c72e0u: goto label_2c72e0;
        case 0x2c72e4u: goto label_2c72e4;
        case 0x2c72e8u: goto label_2c72e8;
        case 0x2c72ecu: goto label_2c72ec;
        case 0x2c72f0u: goto label_2c72f0;
        case 0x2c72f4u: goto label_2c72f4;
        case 0x2c72f8u: goto label_2c72f8;
        case 0x2c72fcu: goto label_2c72fc;
        case 0x2c7300u: goto label_2c7300;
        case 0x2c7304u: goto label_2c7304;
        case 0x2c7308u: goto label_2c7308;
        case 0x2c730cu: goto label_2c730c;
        case 0x2c7310u: goto label_2c7310;
        case 0x2c7314u: goto label_2c7314;
        case 0x2c7318u: goto label_2c7318;
        case 0x2c731cu: goto label_2c731c;
        case 0x2c7320u: goto label_2c7320;
        case 0x2c7324u: goto label_2c7324;
        case 0x2c7328u: goto label_2c7328;
        case 0x2c732cu: goto label_2c732c;
        case 0x2c7330u: goto label_2c7330;
        case 0x2c7334u: goto label_2c7334;
        case 0x2c7338u: goto label_2c7338;
        case 0x2c733cu: goto label_2c733c;
        case 0x2c7340u: goto label_2c7340;
        case 0x2c7344u: goto label_2c7344;
        case 0x2c7348u: goto label_2c7348;
        case 0x2c734cu: goto label_2c734c;
        case 0x2c7350u: goto label_2c7350;
        case 0x2c7354u: goto label_2c7354;
        case 0x2c7358u: goto label_2c7358;
        case 0x2c735cu: goto label_2c735c;
        case 0x2c7360u: goto label_2c7360;
        case 0x2c7364u: goto label_2c7364;
        case 0x2c7368u: goto label_2c7368;
        case 0x2c736cu: goto label_2c736c;
        case 0x2c7370u: goto label_2c7370;
        case 0x2c7374u: goto label_2c7374;
        case 0x2c7378u: goto label_2c7378;
        case 0x2c737cu: goto label_2c737c;
        case 0x2c7380u: goto label_2c7380;
        case 0x2c7384u: goto label_2c7384;
        case 0x2c7388u: goto label_2c7388;
        case 0x2c738cu: goto label_2c738c;
        case 0x2c7390u: goto label_2c7390;
        case 0x2c7394u: goto label_2c7394;
        case 0x2c7398u: goto label_2c7398;
        case 0x2c739cu: goto label_2c739c;
        case 0x2c73a0u: goto label_2c73a0;
        case 0x2c73a4u: goto label_2c73a4;
        case 0x2c73a8u: goto label_2c73a8;
        case 0x2c73acu: goto label_2c73ac;
        case 0x2c73b0u: goto label_2c73b0;
        case 0x2c73b4u: goto label_2c73b4;
        default: break;
    }

    ctx->pc = 0x2c7248u;

label_2c7248:
    // 0x2c7248: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c7248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c724c:
    // 0x2c724c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c724cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7250:
    // 0x2c7250: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c7250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2c7254:
    // 0x2c7254: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c7254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2c7258:
    // 0x2c7258: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c7258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c725c:
    // 0x2c725c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c7260:
    // 0x2c7260: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2c7260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2c7264:
    // 0x2c7264: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_2c7268:
    if (ctx->pc == 0x2C7268u) {
        ctx->pc = 0x2C7268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7264u;
        // 0x2c7268: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C726Cu;
        goto label_2c726c;
    }
    ctx->pc = 0x2C7264u;
    {
        const bool branch_taken_0x2c7264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7264u;
        // 0x2c7268: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7264) {
            ctx->pc = 0x2C72B8u;
            goto label_2c72b8;
        }
    }
    ctx->pc = 0x2C726Cu;
label_2c726c:
    // 0x2c726c: 0x54a0004b  bnel        $a1, $zero, . + 4 + (0x4B << 2)
label_2c7270:
    if (ctx->pc == 0x2C7270u) {
        ctx->pc = 0x2C7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C726Cu;
        // 0x2c7270: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7274u;
        goto label_2c7274;
    }
    ctx->pc = 0x2C726Cu;
    {
        const bool branch_taken_0x2c726c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c726c) {
            ctx->pc = 0x2C7270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C726Cu;
            // 0x2c7270: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C739Cu;
            goto label_2c739c;
        }
    }
    ctx->pc = 0x2C7274u;
label_2c7274:
    // 0x2c7274: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c7274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c7278:
    // 0x2c7278: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c7278u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c727c:
    // 0x2c727c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c7280:
    // 0x2c7280: 0x40f809  jalr        $v0
label_2c7284:
    if (ctx->pc == 0x2C7284u) {
        ctx->pc = 0x2C7284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7280u;
        // 0x2c7284: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7288u;
        goto label_2c7288;
    }
    ctx->pc = 0x2C7280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C7288u);
        ctx->pc = 0x2C7284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7280u;
        // 0x2c7284: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7280u, 0x2C7288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C7288u;
label_2c7288:
    // 0x2c7288: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c728c:
    // 0x2c728c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c728cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c7290:
    // 0x2c7290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7294:
    // 0x2c7294: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2c7294u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7298:
    // 0x2c7298: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x2c7298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_2c729c:
    // 0x2c729c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c729cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c72a0:
    // 0x2c72a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c72a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c72a4:
    // 0x2c72a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c72a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c72a8:
    // 0x2c72a8: 0xc088178  jal         func_2205E0
label_2c72ac:
    if (ctx->pc == 0x2C72ACu) {
        ctx->pc = 0x2C72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72A8u;
        // 0x2c72ac: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C72B0u;
        goto label_2c72b0;
    }
    ctx->pc = 0x2C72A8u;
    SET_GPR_U32(ctx, 31, 0x2C72B0u);
    ctx->pc = 0x2C72ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C72A8u;
    // 0x2c72ac: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C72A8u, 0x2C72B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72B0u;
label_2c72b0:
    // 0x2c72b0: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2c72b4:
    if (ctx->pc == 0x2C72B4u) {
        ctx->pc = 0x2C72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72B0u;
        // 0x2c72b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C72B8u;
        goto label_2c72b8;
    }
    ctx->pc = 0x2C72B0u;
    {
        const bool branch_taken_0x2c72b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72B0u;
        // 0x2c72b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72b0) {
            ctx->pc = 0x2C739Cu;
            goto label_2c739c;
        }
    }
    ctx->pc = 0x2C72B8u;
label_2c72b8:
    // 0x2c72b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c72b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c72bc:
    // 0x2c72bc: 0x2ca2000c  sltiu       $v0, $a1, 0xC
    ctx->pc = 0x2c72bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_2c72c0:
    // 0x2c72c0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2c72c4:
    if (ctx->pc == 0x2C72C4u) {
        ctx->pc = 0x2C72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72C0u;
        // 0x2c72c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C72C8u;
        goto label_2c72c8;
    }
    ctx->pc = 0x2C72C0u;
    {
        const bool branch_taken_0x2c72c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72C0u;
        // 0x2c72c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72c0) {
            ctx->pc = 0x2C7338u;
            goto label_2c7338;
        }
    }
    ctx->pc = 0x2C72C8u;
label_2c72c8:
    // 0x2c72c8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2c72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2c72cc:
    // 0x2c72cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2c72ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2c72d0:
    // 0x2c72d0: 0x24425680  addiu       $v0, $v0, 0x5680
    ctx->pc = 0x2c72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22144));
label_2c72d4:
    // 0x2c72d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c72d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c72d8:
    // 0x2c72d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c72d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c72dc:
    // 0x2c72dc: 0x800008  jr          $a0
label_2c72e0:
    if (ctx->pc == 0x2C72E0u) {
        ctx->pc = 0x2C72E4u;
        goto label_2c72e4;
    }
    ctx->pc = 0x2C72DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C72E4u: goto label_2c72e4;
            case 0x2C72ECu: goto label_2c72ec;
            case 0x2C72F4u: goto label_2c72f4;
            case 0x2C72FCu: goto label_2c72fc;
            case 0x2C7308u: goto label_2c7308;
            case 0x2C7314u: goto label_2c7314;
            case 0x2C731Cu: goto label_2c731c;
            case 0x2C7324u: goto label_2c7324;
            case 0x2C732Cu: goto label_2c732c;
            case 0x2C7334u: goto label_2c7334;
            case 0x2C7338u: goto label_2c7338;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C72DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C72E4u;
label_2c72e4:
    // 0x2c72e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_2c72e8:
    if (ctx->pc == 0x2C72E8u) {
        ctx->pc = 0x2C72E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72E4u;
        // 0x2c72e8: 0x2411005f  addiu       $s1, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C72ECu;
        goto label_2c72ec;
    }
    ctx->pc = 0x2C72E4u;
    {
        const bool branch_taken_0x2c72e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C72E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72E4u;
        // 0x2c72e8: 0x2411005f  addiu       $s1, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72e4) {
            ctx->pc = 0x2C7338u;
            goto label_2c7338;
        }
    }
    ctx->pc = 0x2C72ECu;
label_2c72ec:
    // 0x2c72ec: 0x10000012  b           . + 4 + (0x12 << 2)
label_2c72f0:
    if (ctx->pc == 0x2C72F0u) {
        ctx->pc = 0x2C72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72ECu;
        // 0x2c72f0: 0x24110060  addiu       $s1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C72F4u;
        goto label_2c72f4;
    }
    ctx->pc = 0x2C72ECu;
    {
        const bool branch_taken_0x2c72ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72ECu;
        // 0x2c72f0: 0x24110060  addiu       $s1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72ec) {
            ctx->pc = 0x2C7338u;
            goto label_2c7338;
        }
    }
    ctx->pc = 0x2C72F4u;
label_2c72f4:
    // 0x2c72f4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2c72f8:
    if (ctx->pc == 0x2C72F8u) {
        ctx->pc = 0x2C72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72F4u;
        // 0x2c72f8: 0x24110061  addiu       $s1, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C72FCu;
        goto label_2c72fc;
    }
    ctx->pc = 0x2C72F4u;
    {
        const bool branch_taken_0x2c72f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72F4u;
        // 0x2c72f8: 0x24110061  addiu       $s1, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72f4) {
            ctx->pc = 0x2C7338u;
            goto label_2c7338;
        }
    }
    ctx->pc = 0x2C72FCu;
label_2c72fc:
    // 0x2c72fc: 0x24110063  addiu       $s1, $zero, 0x63
    ctx->pc = 0x2c72fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2c7300:
    // 0x2c7300: 0x1000000d  b           . + 4 + (0xD << 2)
label_2c7304:
    if (ctx->pc == 0x2C7304u) {
        ctx->pc = 0x2C7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7300u;
        // 0x2c7304: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7308u;
        goto label_2c7308;
    }
    ctx->pc = 0x2C7300u;
    {
        const bool branch_taken_0x2c7300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7300u;
        // 0x2c7304: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7300) {
            ctx->pc = 0x2C7338u;
            goto label_2c7338;
        }
    }
    ctx->pc = 0x2C7308u;
label_2c7308:
    // 0x2c7308: 0x24110062  addiu       $s1, $zero, 0x62
    ctx->pc = 0x2c7308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_2c730c:
    // 0x2c730c: 0x1000000a  b           . + 4 + (0xA << 2)
label_2c7310:
    if (ctx->pc == 0x2C7310u) {
        ctx->pc = 0x2C7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C730Cu;
        // 0x2c7310: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7314u;
        goto label_2c7314;
    }
    ctx->pc = 0x2C730Cu;
    {
        const bool branch_taken_0x2c730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C730Cu;
        // 0x2c7310: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c730c) {
            ctx->pc = 0x2C7338u;
            goto label_2c7338;
        }
    }
    ctx->pc = 0x2C7314u;
label_2c7314:
    // 0x2c7314: 0x10000008  b           . + 4 + (0x8 << 2)
label_2c7318:
    if (ctx->pc == 0x2C7318u) {
        ctx->pc = 0x2C7318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7314u;
        // 0x2c7318: 0x24110065  addiu       $s1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C731Cu;
        goto label_2c731c;
    }
    ctx->pc = 0x2C7314u;
    {
        const bool branch_taken_0x2c7314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7314u;
        // 0x2c7318: 0x24110065  addiu       $s1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7314) {
            ctx->pc = 0x2C7338u;
            goto label_2c7338;
        }
    }
    ctx->pc = 0x2C731Cu;
label_2c731c:
    // 0x2c731c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2c7320:
    if (ctx->pc == 0x2C7320u) {
        ctx->pc = 0x2C7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C731Cu;
        // 0x2c7320: 0x24110064  addiu       $s1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7324u;
        goto label_2c7324;
    }
    ctx->pc = 0x2C731Cu;
    {
        const bool branch_taken_0x2c731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C731Cu;
        // 0x2c7320: 0x24110064  addiu       $s1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c731c) {
            ctx->pc = 0x2C7338u;
            goto label_2c7338;
        }
    }
    ctx->pc = 0x2C7324u;
label_2c7324:
    // 0x2c7324: 0x10000004  b           . + 4 + (0x4 << 2)
label_2c7328:
    if (ctx->pc == 0x2C7328u) {
        ctx->pc = 0x2C7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7324u;
        // 0x2c7328: 0x2411005e  addiu       $s1, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C732Cu;
        goto label_2c732c;
    }
    ctx->pc = 0x2C7324u;
    {
        const bool branch_taken_0x2c7324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7324u;
        // 0x2c7328: 0x2411005e  addiu       $s1, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7324) {
            ctx->pc = 0x2C7338u;
            goto label_2c7338;
        }
    }
    ctx->pc = 0x2C732Cu;
label_2c732c:
    // 0x2c732c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c7330:
    if (ctx->pc == 0x2C7330u) {
        ctx->pc = 0x2C7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C732Cu;
        // 0x2c7330: 0x24110066  addiu       $s1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7334u;
        goto label_2c7334;
    }
    ctx->pc = 0x2C732Cu;
    {
        const bool branch_taken_0x2c732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C732Cu;
        // 0x2c7330: 0x24110066  addiu       $s1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c732c) {
            ctx->pc = 0x2C7338u;
            goto label_2c7338;
        }
    }
    ctx->pc = 0x2C7334u;
label_2c7334:
    // 0x2c7334: 0x24110069  addiu       $s1, $zero, 0x69
    ctx->pc = 0x2c7334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_2c7338:
    // 0x2c7338: 0x52200018  beql        $s1, $zero, . + 4 + (0x18 << 2)
label_2c733c:
    if (ctx->pc == 0x2C733Cu) {
        ctx->pc = 0x2C733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7338u;
        // 0x2c733c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7340u;
        goto label_2c7340;
    }
    ctx->pc = 0x2C7338u;
    {
        const bool branch_taken_0x2c7338 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7338) {
            ctx->pc = 0x2C733Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7338u;
            // 0x2c733c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C739Cu;
            goto label_2c739c;
        }
    }
    ctx->pc = 0x2C7340u;
label_2c7340:
    // 0x2c7340: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2c7340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2c7344:
    // 0x2c7344: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2c7348:
    if (ctx->pc == 0x2C7348u) {
        ctx->pc = 0x2C7348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7344u;
        // 0x2c7348: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C734Cu;
        goto label_2c734c;
    }
    ctx->pc = 0x2C7344u;
    {
        const bool branch_taken_0x2c7344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7344u;
        // 0x2c7348: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7344) {
            ctx->pc = 0x2C7368u;
            goto label_2c7368;
        }
    }
    ctx->pc = 0x2C734Cu;
label_2c734c:
    // 0x2c734c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c7350:
    // 0x2c7350: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c7350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c7354:
    // 0x2c7354: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c7354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c7358:
    // 0x2c7358: 0x40f809  jalr        $v0
label_2c735c:
    if (ctx->pc == 0x2C735Cu) {
        ctx->pc = 0x2C735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7358u;
        // 0x2c735c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7360u;
        goto label_2c7360;
    }
    ctx->pc = 0x2C7358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C7360u);
        ctx->pc = 0x2C735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7358u;
        // 0x2c735c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7358u, 0x2C7360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C7360u;
label_2c7360:
    // 0x2c7360: 0x10000003  b           . + 4 + (0x3 << 2)
label_2c7364:
    if (ctx->pc == 0x2C7364u) {
        ctx->pc = 0x2C7368u;
        goto label_2c7368;
    }
    ctx->pc = 0x2C7360u;
    {
        const bool branch_taken_0x2c7360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7360) {
            ctx->pc = 0x2C7370u;
            goto label_2c7370;
        }
    }
    ctx->pc = 0x2C7368u;
label_2c7368:
    // 0x2c7368: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2c7368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2c736c:
    // 0x2c736c: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x2c736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c7370:
    // 0x2c7370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c7374:
    // 0x2c7374: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c7374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c7378:
    // 0x2c7378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c7378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c737c:
    // 0x2c737c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c737cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7380:
    // 0x2c7380: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c7380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c7384:
    // 0x2c7384: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2c7384u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7388:
    // 0x2c7388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c7388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c738c:
    // 0x2c738c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c738cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7390:
    // 0x2c7390: 0xc088178  jal         func_2205E0
label_2c7394:
    if (ctx->pc == 0x2C7394u) {
        ctx->pc = 0x2C7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7390u;
        // 0x2c7394: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7398u;
        goto label_2c7398;
    }
    ctx->pc = 0x2C7390u;
    SET_GPR_U32(ctx, 31, 0x2C7398u);
    ctx->pc = 0x2C7394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7390u;
    // 0x2c7394: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C7390u, 0x2C7398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7398u;
label_2c7398:
    // 0x2c7398: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c7398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c739c:
    // 0x2c739c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c739cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c73a0:
    // 0x2c73a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c73a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c73a4:
    // 0x2c73a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2c73a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c73a8:
    // 0x2c73a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c73a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c73ac:
    // 0x2c73ac: 0x3e00008  jr          $ra
label_2c73b0:
    if (ctx->pc == 0x2C73B0u) {
        ctx->pc = 0x2C73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C73ACu;
        // 0x2c73b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C73B4u;
        goto label_2c73b4;
    }
    ctx->pc = 0x2C73ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C73ACu;
        // 0x2c73b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C73ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C73B4u;
label_2c73b4:
    // 0x2c73b4: 0x0  nop
    ctx->pc = 0x2c73b4u;
    // NOP
    ctx->pc = 0x2c73b8u;
}
