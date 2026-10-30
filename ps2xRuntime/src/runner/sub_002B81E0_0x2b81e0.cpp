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

// Function: sub_002B81E0
// Address: 0x2b81e0 - 0x2b8510
void sub_002B81E0_0x2b81e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B81E0_0x2b81e0");
#endif

    switch (ctx->pc) {
        case 0x2b8270u: goto label_2b8270;
        case 0x2b8280u: goto label_2b8280;
        case 0x2b834cu: goto label_2b834c;
        case 0x2b8354u: goto label_2b8354;
        case 0x2b8368u: goto label_2b8368;
        case 0x2b8378u: goto label_2b8378;
        case 0x2b838cu: goto label_2b838c;
        case 0x2b83e8u: goto label_2b83e8;
        case 0x2b8400u: goto label_2b8400;
        case 0x2b8418u: goto label_2b8418;
        case 0x2b8428u: goto label_2b8428;
        case 0x2b8470u: goto label_2b8470;
        case 0x2b8488u: goto label_2b8488;
        case 0x2b849cu: goto label_2b849c;
        case 0x2b84acu: goto label_2b84ac;
        case 0x2b84e0u: goto label_2b84e0;
        case 0x2b84f0u: goto label_2b84f0;
        default: break;
    }

    ctx->pc = 0x2b81e0u;

    // 0x2b81e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b81e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b81e4: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2b81e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2b81e8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2b81e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2b81ec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2b81ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2b81f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b81f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2b81f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2b81f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b81f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b81fc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2b81fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2b8200: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b8200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b8204: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b8204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b8208: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x2b8208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2b820c: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2b820cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b8210: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b8210u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2b8214: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x2b8214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x2b8218: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b8218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b821c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b821cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2b8220: 0xa2220034  sb          $v0, 0x34($s1)
    ctx->pc = 0x2b8220u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b8224: 0x924300e0  lbu         $v1, 0xE0($s2)
    ctx->pc = 0x2b8224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2b8228: 0x31e78  dsll        $v1, $v1, 25
    ctx->pc = 0x2b8228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 25);
    // 0x2b822c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b822cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2b8230: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2b8230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2b8234: 0xa2230035  sb          $v1, 0x35($s1)
    ctx->pc = 0x2b8234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b8238: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b8238u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2b823c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2b823cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2b8240: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b8240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b8244: 0xa2220036  sb          $v0, 0x36($s1)
    ctx->pc = 0x2b8244u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b8248: 0xac860208  sw          $a2, 0x208($a0)
    ctx->pc = 0x2b8248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 520), GPR_U32(ctx, 6));
    // 0x2b824c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b8250: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2b8250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8254: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2b8254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x2b8258: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b8258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b825c: 0x92230031  lbu         $v1, 0x31($s1)
    ctx->pc = 0x2b825cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x2b8260: 0xa0430265  sb          $v1, 0x265($v0)
    ctx->pc = 0x2b8260u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b8264: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b8264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b8268: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2B8268u;
    SET_GPR_U32(ctx, 31, 0x2B8270u);
    ctx->pc = 0x2B826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8268u;
    // 0x2b826c: 0x8225003b  lb          $a1, 0x3B($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2B8268u, 0x2B8270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8270u;
label_2b8270:
    // 0x2b8270: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b8270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b8274: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8278: 0xc0a22c6  jal         func_288B18
    ctx->pc = 0x2B8278u;
    SET_GPR_U32(ctx, 31, 0x2B8280u);
    ctx->pc = 0x2B827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8278u;
    // 0x2b827c: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2B8278u, 0x2B8280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8280u;
label_2b8280:
    // 0x2b8280: 0x92220032  lbu         $v0, 0x32($s1)
    ctx->pc = 0x2b8280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x2b8284: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B8284u;
    {
        const bool branch_taken_0x2b8284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8284) {
            ctx->pc = 0x2B8288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8284u;
            // 0x2b8288: 0x92220033  lbu         $v0, 0x33($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B82A4u;
            goto label_2b82a4;
        }
    }
    ctx->pc = 0x2B828Cu;
    // 0x2b828c: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b828cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2b8290: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x2b8290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x2b8294: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2b8294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2b8298: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b8298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b829c: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2b829cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    // 0x2b82a0: 0x92220033  lbu         $v0, 0x33($s1)
    ctx->pc = 0x2b82a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
label_2b82a4:
    // 0x2b82a4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B82A4u;
    {
        const bool branch_taken_0x2b82a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b82a4) {
            ctx->pc = 0x2B82A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B82A4u;
            // 0x2b82a8: 0x92220034  lbu         $v0, 0x34($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B82C0u;
            goto label_2b82c0;
        }
    }
    ctx->pc = 0x2B82ACu;
    // 0x2b82ac: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b82acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2b82b0: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x2b82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2b82b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b82b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b82b8: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2b82b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    // 0x2b82bc: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x2b82bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_2b82c0:
    // 0x2b82c0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2b82c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b82c4: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B82C4u;
    {
        const bool branch_taken_0x2b82c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2b82c4) {
            ctx->pc = 0x2B82C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B82C4u;
            // 0x2b82c8: 0x92220035  lbu         $v0, 0x35($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B82E0u;
            goto label_2b82e0;
        }
    }
    ctx->pc = 0x2B82CCu;
    // 0x2b82cc: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b82ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2b82d0: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x2b82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x2b82d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b82d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b82d8: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2b82d8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    // 0x2b82dc: 0x92220035  lbu         $v0, 0x35($s1)
    ctx->pc = 0x2b82dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
label_2b82e0:
    // 0x2b82e0: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B82E0u;
    {
        const bool branch_taken_0x2b82e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2b82e0) {
            ctx->pc = 0x2B82E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B82E0u;
            // 0x2b82e4: 0x92220036  lbu         $v0, 0x36($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B82FCu;
            goto label_2b82fc;
        }
    }
    ctx->pc = 0x2B82E8u;
    // 0x2b82e8: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b82e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2b82ec: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x2b82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2b82f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b82f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b82f4: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2b82f4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    // 0x2b82f8: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x2b82f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_2b82fc:
    // 0x2b82fc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B82FCu;
    {
        const bool branch_taken_0x2b82fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b82fc) {
            ctx->pc = 0x2B8300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B82FCu;
            // 0x2b8300: 0x92220037  lbu         $v0, 0x37($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B831Cu;
            goto label_2b831c;
        }
    }
    ctx->pc = 0x2B8304u;
    // 0x2b8304: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b8304u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2b8308: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x2b8308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x2b830c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2b830cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2b8310: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b8310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b8314: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2b8314u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    // 0x2b8318: 0x92220037  lbu         $v0, 0x37($s1)
    ctx->pc = 0x2b8318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
label_2b831c:
    // 0x2b831c: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B831Cu;
    {
        const bool branch_taken_0x2b831c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2B8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B831Cu;
        // 0x2b8320: 0xde4200e0  ld          $v0, 0xE0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b831c) {
            ctx->pc = 0x2B8334u;
            goto label_2b8334;
        }
    }
    ctx->pc = 0x2B8324u;
    // 0x2b8324: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x2b8324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2b8328: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b8328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b832c: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2b832cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    // 0x2b8330: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b8330u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2b8334:
    // 0x2b8334: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2b8334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2b8338: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b833c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b833cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8340: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b8340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b8344: 0xc087612  jal         func_21D848
    ctx->pc = 0x2B8344u;
    SET_GPR_U32(ctx, 31, 0x2B834Cu);
    ctx->pc = 0x2B8348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8344u;
    // 0x2b8348: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2B8344u, 0x2B834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B834Cu;
label_2b834c:
    // 0x2b834c: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2B834Cu;
    SET_GPR_U32(ctx, 31, 0x2B8354u);
    ctx->pc = 0x2B8350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B834Cu;
    // 0x2b8350: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2B834Cu, 0x2B8354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8354u;
label_2b8354:
    // 0x2b8354: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b8354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2b8358: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b8358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b835c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b835cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b8360: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B8360u;
    SET_GPR_U32(ctx, 31, 0x2B8368u);
    ctx->pc = 0x2B8364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8360u;
    // 0x2b8364: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B8360u, 0x2B8368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8368u;
label_2b8368:
    // 0x2b8368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b836c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b836cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8370: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2B8370u;
    SET_GPR_U32(ctx, 31, 0x2B8378u);
    ctx->pc = 0x2B8374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8370u;
    // 0x2b8374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2B8370u, 0x2B8378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8378u;
label_2b8378:
    // 0x2b8378: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b8378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b837c: 0x52000053  beql        $s0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x2B837Cu;
    {
        const bool branch_taken_0x2b837c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b837c) {
            ctx->pc = 0x2B8380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B837Cu;
            // 0x2b8380: 0x92220039  lbu         $v0, 0x39($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B84CCu;
            goto label_2b84cc;
        }
    }
    ctx->pc = 0x2B8384u;
    // 0x2b8384: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B8384u;
    SET_GPR_U32(ctx, 31, 0x2B838Cu);
    ctx->pc = 0x2B8388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8384u;
    // 0x2b8388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B8384u, 0x2B838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B838Cu;
label_2b838c:
    // 0x2b838c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b838cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8390: 0x8c620204  lw          $v0, 0x204($v1)
    ctx->pc = 0x2b8390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x2b8394: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B8394u;
    {
        const bool branch_taken_0x2b8394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2b8394) {
            ctx->pc = 0x2B8398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8394u;
            // 0x2b8398: 0xac600204  sw          $zero, 0x204($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 516), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B839Cu;
            goto label_2b839c;
        }
    }
    ctx->pc = 0x2B839Cu;
label_2b839c:
    // 0x2b839c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2b839cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2b83a0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2b83a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2b83a4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2b83a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b83a8: 0x54730048  bnel        $v1, $s3, . + 4 + (0x48 << 2)
    ctx->pc = 0x2B83A8u;
    {
        const bool branch_taken_0x2b83a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x2b83a8) {
            ctx->pc = 0x2B83ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B83A8u;
            // 0x2b83ac: 0x92220039  lbu         $v0, 0x39($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B84CCu;
            goto label_2b84cc;
        }
    }
    ctx->pc = 0x2B83B0u;
    // 0x2b83b0: 0x92220038  lbu         $v0, 0x38($s1)
    ctx->pc = 0x2b83b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2b83b4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2b83b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b83b8: 0x16830020  bne         $s4, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2B83B8u;
    {
        const bool branch_taken_0x2b83b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B83BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83B8u;
        // 0x2b83bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b83b8) {
            ctx->pc = 0x2B843Cu;
            goto label_2b843c;
        }
    }
    ctx->pc = 0x2B83C0u;
    // 0x2b83c0: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x2b83c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x2b83c4: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x2b83c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2b83c8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2b83c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b83cc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2b83ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2b83d0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B83D0u;
    {
        const bool branch_taken_0x2b83d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83D0u;
        // 0x2b83d4: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b83d0) {
            ctx->pc = 0x2B8440u;
            goto label_2b8440;
        }
    }
    ctx->pc = 0x2B83D8u;
    // 0x2b83d8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2b83d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2b83dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b83dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b83e0: 0xc0739c6  jal         func_1CE718
    ctx->pc = 0x2B83E0u;
    SET_GPR_U32(ctx, 31, 0x2B83E8u);
    ctx->pc = 0x2B83E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B83E0u;
    // 0x2b83e4: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE718u, 0x2B83E0u, 0x2B83E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B83E8u;
label_2b83e8:
    // 0x2b83e8: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x2b83e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x2b83ec: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x2b83ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
    // 0x2b83f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B83F0u;
    {
        const bool branch_taken_0x2b83f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83F0u;
        // 0x2b83f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b83f0) {
            ctx->pc = 0x2B8408u;
            goto label_2b8408;
        }
    }
    ctx->pc = 0x2B83F8u;
    // 0x2b83f8: 0xc107444  jal         func_41D110
    ctx->pc = 0x2B83F8u;
    SET_GPR_U32(ctx, 31, 0x2B8400u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x2B83F8u, 0x2B8400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8400u;
label_2b8400:
    // 0x2b8400: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b8400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8404: 0x282180a  movz        $v1, $s4, $v0
    ctx->pc = 0x2b8404u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 20));
label_2b8408:
    // 0x2b8408: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2B8408u;
    {
        const bool branch_taken_0x2b8408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8408) {
            ctx->pc = 0x2B840Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8408u;
            // 0x2b840c: 0x92220039  lbu         $v0, 0x39($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B84CCu;
            goto label_2b84cc;
        }
    }
    ctx->pc = 0x2B8410u;
    // 0x2b8410: 0xc073a8e  jal         func_1CEA38
    ctx->pc = 0x2B8410u;
    SET_GPR_U32(ctx, 31, 0x2B8418u);
    ctx->pc = 0x2B8414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8410u;
    // 0x2b8414: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x2B8410u, 0x2B8418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8418u;
label_2b8418:
    // 0x2b8418: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2B8418u;
    {
        const bool branch_taken_0x2b8418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8418) {
            ctx->pc = 0x2B841Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8418u;
            // 0x2b841c: 0x92220039  lbu         $v0, 0x39($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B84CCu;
            goto label_2b84cc;
        }
    }
    ctx->pc = 0x2B8420u;
    // 0x2b8420: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x2B8420u;
    SET_GPR_U32(ctx, 31, 0x2B8428u);
    ctx->pc = 0x2B8424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8420u;
    // 0x2b8424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2B8420u, 0x2B8428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8428u;
label_2b8428:
    // 0x2b8428: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B8428u;
    {
        const bool branch_taken_0x2b8428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8428) {
            ctx->pc = 0x2B842Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8428u;
            // 0x2b842c: 0x92220039  lbu         $v0, 0x39($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B84CCu;
            goto label_2b84cc;
        }
    }
    ctx->pc = 0x2B8430u;
    // 0x2b8430: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x2b8430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x2b8434: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2B8434u;
    {
        const bool branch_taken_0x2b8434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8434u;
        // 0x2b8438: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8434) {
            ctx->pc = 0x2B84BCu;
            goto label_2b84bc;
        }
    }
    ctx->pc = 0x2B843Cu;
label_2b843c:
    // 0x2b843c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2b843cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b8440:
    // 0x2b8440: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B8440u;
    {
        const bool branch_taken_0x2b8440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8440) {
            ctx->pc = 0x2B8444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8440u;
            // 0x2b8444: 0x92220039  lbu         $v0, 0x39($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B84CCu;
            goto label_2b84cc;
        }
    }
    ctx->pc = 0x2B8448u;
    // 0x2b8448: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x2b8448u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x2b844c: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x2b844cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2b8450: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2b8450u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8454: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2b8454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2b8458: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B8458u;
    {
        const bool branch_taken_0x2b8458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8458) {
            ctx->pc = 0x2B845Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8458u;
            // 0x2b845c: 0x92220039  lbu         $v0, 0x39($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B84CCu;
            goto label_2b84cc;
        }
    }
    ctx->pc = 0x2B8460u;
    // 0x2b8460: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2b8460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2b8464: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b8464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8468: 0xc0739c6  jal         func_1CE718
    ctx->pc = 0x2B8468u;
    SET_GPR_U32(ctx, 31, 0x2B8470u);
    ctx->pc = 0x2B846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8468u;
    // 0x2b846c: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE718u, 0x2B8468u, 0x2B8470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8470u;
label_2b8470:
    // 0x2b8470: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x2b8470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x2b8474: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x2b8474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
    // 0x2b8478: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8478u;
    {
        const bool branch_taken_0x2b8478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8478u;
        // 0x2b847c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8478) {
            ctx->pc = 0x2B848Cu;
            goto label_2b848c;
        }
    }
    ctx->pc = 0x2B8480u;
    // 0x2b8480: 0xc107444  jal         func_41D110
    ctx->pc = 0x2B8480u;
    SET_GPR_U32(ctx, 31, 0x2B8488u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x2B8480u, 0x2B8488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8488u;
label_2b8488:
    // 0x2b8488: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2b8488u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2b848c:
    // 0x2b848c: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2B848Cu;
    {
        const bool branch_taken_0x2b848c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b848c) {
            ctx->pc = 0x2B8490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B848Cu;
            // 0x2b8490: 0x92220039  lbu         $v0, 0x39($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B84CCu;
            goto label_2b84cc;
        }
    }
    ctx->pc = 0x2B8494u;
    // 0x2b8494: 0xc073a8e  jal         func_1CEA38
    ctx->pc = 0x2B8494u;
    SET_GPR_U32(ctx, 31, 0x2B849Cu);
    ctx->pc = 0x2B8498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8494u;
    // 0x2b8498: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x2B8494u, 0x2B849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B849Cu;
label_2b849c:
    // 0x2b849c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2B849Cu;
    {
        const bool branch_taken_0x2b849c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b849c) {
            ctx->pc = 0x2B84A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B849Cu;
            // 0x2b84a0: 0x92220039  lbu         $v0, 0x39($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B84CCu;
            goto label_2b84cc;
        }
    }
    ctx->pc = 0x2B84A4u;
    // 0x2b84a4: 0xc088edc  jal         func_223B70
    ctx->pc = 0x2B84A4u;
    SET_GPR_U32(ctx, 31, 0x2B84ACu);
    ctx->pc = 0x2B84A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B84A4u;
    // 0x2b84a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2B84A4u, 0x2B84ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B84ACu;
label_2b84ac:
    // 0x2b84ac: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B84ACu;
    {
        const bool branch_taken_0x2b84ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b84ac) {
            ctx->pc = 0x2B84B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B84ACu;
            // 0x2b84b0: 0x92220039  lbu         $v0, 0x39($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B84CCu;
            goto label_2b84cc;
        }
    }
    ctx->pc = 0x2B84B4u;
    // 0x2b84b4: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x2b84b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x2b84b8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2b84b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b84bc:
    // 0x2b84bc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2b84bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b84c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b84c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b84c4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2b84c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2b84c8: 0x92220039  lbu         $v0, 0x39($s1)
    ctx->pc = 0x2b84c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_2b84cc:
    // 0x2b84cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B84CCu;
    {
        const bool branch_taken_0x2b84cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84CCu;
        // 0x2b84d0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84cc) {
            ctx->pc = 0x2B84F4u;
            goto label_2b84f4;
        }
    }
    ctx->pc = 0x2B84D4u;
    // 0x2b84d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b84d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b84d8: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x2B84D8u;
    SET_GPR_U32(ctx, 31, 0x2B84E0u);
    ctx->pc = 0x2B84DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B84D8u;
    // 0x2b84dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x2B84D8u, 0x2B84E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B84E0u;
label_2b84e0:
    // 0x2b84e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B84E0u;
    {
        const bool branch_taken_0x2b84e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B84E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84E0u;
        // 0x2b84e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84e0) {
            ctx->pc = 0x2B84F0u;
            goto label_2b84f0;
        }
    }
    ctx->pc = 0x2B84E8u;
    // 0x2b84e8: 0xc049a1e  jal         func_126878
    ctx->pc = 0x2B84E8u;
    SET_GPR_U32(ctx, 31, 0x2B84F0u);
    ctx->pc = 0x2B84ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B84E8u;
    // 0x2b84ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126878u, 0x2B84E8u, 0x2B84F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B84F0u;
label_2b84f0:
    // 0x2b84f0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2b84f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b84f4:
    // 0x2b84f4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2b84f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b84f8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2b84f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b84fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b84fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8500: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2b8500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b8504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8508: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8508u;
        // 0x2b850c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8510u;
}
